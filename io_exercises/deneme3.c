#include <stdio.h>

void imgProcess(int camData[3][3], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (camData[i][j] > 200){
                printf("LANE DETECTED! Coordinate: [%d][%d] - Brightness: %d\n",i,j,camData[i][j]);
            }
        }
    }
}
int main(){
    int cam[3][3] = { {15, 45, 120}, {210, 50, 30}, {10, 245, 90} };
    imgProcess(cam, sizeof(cam)/sizeof(cam[0]));
    return 0;
}   