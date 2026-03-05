#include <stdio.h>

float max(float a, int b){
    return a*(1+(0.0333*b));
}
int main() {
    float bench = 100.0;
    float deadlift = 140.0;
    float overhead = 80.0;
    int tekrar_b = 5;
    int tekrar_d = 3;
    int tekrar_o = 4;
    printf("%-15s", "Hareket");
    printf("%-10s", "Agirlik");
    printf("%-10s", "Tekrar");
    printf("%-10s\n", "Tahmini 1RM");
    for (int i = 0; i < 3; i++){
        switch (i){
        case 0:
        printf("%-15s %-10.1f %-10d %-10.2f\n", "Bench Press", bench, tekrar_b, max(bench, tekrar_b));
        break;
        case 1:
        printf("%-15s %-10.1f %-10d %-10.2f\n", "Deadlift", deadlift, tekrar_d, max(deadlift, tekrar_d));
        break;
        case 2:
        printf("%-15s %-10.1f %-10d %-10.2f\n", "Overhead Press", overhead, tekrar_o, max(overhead, tekrar_o));
        break;
        }
    }
    return 0;
}