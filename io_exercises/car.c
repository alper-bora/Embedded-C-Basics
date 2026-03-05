#include <stdio.h>

void emergencyBrake(float *speedAddress){
    *speedAddress = 0.0;
}

int main() {
    float momentary_speed = 85.5;
    printf("Momentary speed: %f\n", momentary_speed);
    emergencyBrake(&momentary_speed);
    printf("Momentary speed: %f", momentary_speed);
    return 0;
}