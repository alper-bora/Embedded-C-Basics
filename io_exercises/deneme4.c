#include <stdio.h>
#include <string.h>

int main(){
    char incomingCmd[] = "STOP";
    int size = sizeof(incomingCmd)/sizeof(incomingCmd[0]);
    for (int i = 0; i < size; i++){
        if (incomingCmd[i] == '\n'){
            incomingCmd[i] = '\0';
            break;
        }
    }
    if (strcmp(incomingCmd, "STOP") == 0){
        printf("BRAKES ACTIVATED!!");
    }
    return 0;
}