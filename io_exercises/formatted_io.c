#include <stdio.h>

float max(float a, int b){
    return a*(1+(0.0333*b));
}
int main() {
    float bench = 100.0;
    float deadlift = 140.0;
    float overhead = 80.0;
    int rep_b = 5;
    int rep_d = 3;
    int rep_o = 4;
    printf("%-15s", "Movement");
    printf("%-10s", "Weight");
    printf("%-10s", "Reps");
    printf("%-10s\n", "Estimated 1RM");
    for (int i = 0; i < 3; i++){
        switch (i){
        case 0:
        printf("%-15s %-10.1f %-10d %-10.2f\n", "Bench Press", bench, rep_b, max(bench, rep_b));
        break;
        case 1:
        printf("%-15s %-10.1f %-10d %-10.2f\n", "Deadlift", deadlift, rep_d, max(deadlift, rep_d));
        break;
        case 2:
        printf("%-15s %-10.1f %-10d %-10.2f\n", "Overhead Press", overhead, rep_o, max(overhead, rep_o));
        break;
        }
    }
    return 0;
}