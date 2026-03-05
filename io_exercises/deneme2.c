#include <stdio.h>

void obstacleAnalysis(float *sensorData, int size){
    for (int i = 0; i < size; i++){
        if (sensorData[i] < 1.0){
            printf("EMERGENCY! Obstacle: %.1f detected. (RAM Address: %p)", sensorData[i], &sensorData[i]);
            break;
        }
    }
}

int main() {
    float lidarData[5] = {3.2, 4.5, 0.8, 5.1, 1.2};
    obstacleAnalysis(lidarData, sizeof(lidarData)/sizeof(lidarData[0]));
    return 0;
}