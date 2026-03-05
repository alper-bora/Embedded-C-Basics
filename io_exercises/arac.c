#include <stdio.h>

void acilFrenYap(float *hizAdresi){
    *hizAdresi = 0.0;
}

int main() {
    float anlik_hiz = 85.5;
    printf("Anlık hız: %f\n", anlik_hiz);
    acilFrenYap(&anlik_hiz);
    printf("Anlık hız: %f", anlik_hiz);
    return 0;
}