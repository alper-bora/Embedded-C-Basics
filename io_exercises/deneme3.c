#include <stdio.h>

void gorselIsleyici(int kameraVerileri[3][3], int boyut){
    for (int i = 0; i < boyut; i++){
        for (int j = 0; j < boyut; j++){
            if (kameraVerileri[i][j] > 200){
                printf("SERIT TESPIT EDILDI! Koordinat: [%d][%d] - Parlaklik: %d\n",i,j,kameraVerileri[i][j]);
            }
        }
    }
}
int main(){
    int kamera[3][3] = { {15, 45, 120}, {210, 50, 30}, {10, 245, 90} };
    gorselIsleyici(kamera, sizeof(kamera)/sizeof(kamera[0]));
    return 0;
}   