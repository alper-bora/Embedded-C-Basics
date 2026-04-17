#include <stdio.h>

enum states
{
    EMERGENCY_BRAKE = 2,
    CRUISING = 1,
    IDLE = 0
};

typedef struct
{
    float speed;
    float obstacle_distance;
    enum states current_state;
} TelemetryPacket;

void emergencyBrake(TelemetryPacket *car){
    car->speed = 0.0;
}

void state_idle(TelemetryPacket *car)
{
    if (car->speed >= 10) car->speed -= 10;
    else car->speed = 0;
}

void state_cruising(TelemetryPacket *car)
{
    car->speed += 10;
}

int main() {
    void (*state_machine[]) (TelemetryPacket *) = {state_idle, state_cruising, emergencyBrake};
    TelemetryPacket myCar = {0.0, 0.0, 0};
    while (1)
    {
        printf("The distance to obstacle: ");
        scanf("%f", &myCar.obstacle_distance);
        if (myCar.obstacle_distance > 50)
        {
            myCar.current_state = CRUISING;
            state_machine[myCar.current_state](&myCar);
            printf("The speed is: %.2f\n", myCar.speed);
        }
        else if (myCar.obstacle_distance < 10)
        {
            myCar.current_state = EMERGENCY_BRAKE;
            state_machine[myCar.current_state](&myCar);
            printf("The speed is: %.2f\n", myCar.speed);
            break;
        }
        else
        {
            myCar.current_state = IDLE;
            state_machine[myCar.current_state](&myCar);
            printf("The speed is: %.2f\n",myCar.speed);
        }
    }
    return 0;
}