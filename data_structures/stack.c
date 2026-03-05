#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct StackNode * tepe = NULL;

void push(int yeni_deger)
{
    struct StackNode  * yeni_vagon = malloc(sizeof(struct StackNode));
    yeni_vagon->id = yeni_deger;
    yeni_vagon->sonraki = tepe;
    tepe = yeni_vagon;
}

int pop()
{
    if (tepe == NULL)
    {
        printf("Yigin bos!");
        return -1;
    }
    struct StackNode * silinecek = tepe;
    tepe = tepe->sonraki;
    int kurtarilan_deger = silinecek->id;
    free(silinecek);
    return kurtarilan_deger;
}