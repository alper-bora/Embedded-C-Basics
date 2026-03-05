#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct QueueNode * ilk = NULL; //Queue start
struct QueueNode * son = NULL; //Queue finish

void enqueue(int yeni_deger)
{
    struct QueueNode * yeni_vagon = malloc(sizeof(struct QueueNode));
    yeni_vagon->id = yeni_deger;
    yeni_vagon->sonraki = NULL;

    if (son == NULL)
    {
        ilk = yeni_vagon;
        son = yeni_vagon;
        return;
    }
    son->sonraki = yeni_vagon;
    son = yeni_vagon;
}

int dequeue()
{
    int kurtarilan_deger;
    if (ilk == NULL)
    {
        printf("Kuyruk bos!");
        return -1;
    }
    struct QueueNode * silinecek = ilk;
    kurtarilan_deger = silinecek->id;
    ilk = ilk->sonraki;
    if (ilk == NULL) son = NULL;
    free(silinecek);
    return kurtarilan_deger;
}