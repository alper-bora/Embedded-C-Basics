#include <stdio.h>

void engelAnalizi(float *sensorVerileri, int boyut){
    for (int i = 0; i < boyut; i++){
        if (sensorVerileri[i] < 1.0){
            printf("ACİL DURUM! Engel: %.1f tespit edildi. (RAM Adresi: %p)", sensorVerileri[i], &sensorVerileri[i]);
            break;
        }
    }
}

int main() {
    float lidarVerileri[5] = {3.2, 4.5, 0.8, 5.1, 1.2};
    engelAnalizi(lidarVerileri, sizeof(lidarVerileri)/sizeof(lidarVerileri[0]));
    return 0;
}