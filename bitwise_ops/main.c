#include <stdio.h>

#define SET_BIT(REG, BIT) (REG |= (1<<BIT))
#define CLEAR_BIT(REG, BIT) (REG & ~(1<<BIT))
#define TOGGLE_BIT(REG, BIT) (REG ^= (1<<BIT))
#define READ_BIT(REG, BIT) (REG & (1<<BIT))


int main()
{
    unsigned char CAR_CONTROL = 0b00000000;
    CAR_CONTROL |= (1<<3);
    CAR_CONTROL &= ~(1<<3);

    unsigned char SENSOR_REGISTER = 0b00100000;

    if (SENSOR_REGISTER & (1<<5)) printf("Obstacle hit!");
    else printf("Clear!");
    return 0;
}