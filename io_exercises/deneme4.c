#include <stdio.h>
#include <string.h>

int main(){
    char gelenKomut[] = "DUR";
    int boyut = sizeof(gelenKomut)/sizeof(gelenKomut[0]);
    for (int i = 0; i < boyut; i++){
        if (gelenKomut[i] == '\n'){
            gelenKomut[i] = '\0';
            break;
        }
    }
    if (strcmp(gelenKomut, "DUR") == 0){
        printf("FRENLER AKTİF!!");
    }
    return 0;
}