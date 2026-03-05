#include <stdio.h>
#include <stdlib.h>

struct Durak{
    int id;
    struct Durak * sonraki;
};

struct Durak * tepe = NULL; //Stacks GPS
struct Durak * ilk = NULL; //Queue start
struct Durak * son = NULL; //Queue finish

void enqueue(int yeni_deger)
{
    struct Durak * yeni_vagon = malloc(sizeof(struct Durak));
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
    struct Durak * silinecek = ilk;
    kurtarilan_deger = silinecek->id;
    ilk = ilk->sonraki;
    if (ilk == NULL) son = NULL;
    free(silinecek);
    return kurtarilan_deger;
}

void push(int yeni_deger)
{
    struct Durak  * yeni_vagon = malloc(sizeof(struct Durak));
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
    struct Durak * silinecek = tepe;
    tepe = tepe->sonraki;
    int kurtarilan_deger = silinecek->id;
    free(silinecek);
    return kurtarilan_deger;
}

void sonaEkle(int yeni_id){
    struct Durak * yeni_durak = malloc(sizeof(struct Durak));
    yeni_durak -> id = yeni_id;
    yeni_durak -> sonraki = NULL;
    
    if (tepe == NULL){
        tepe = yeni_durak;
        return;
    }
    
    struct Durak * gecici = tepe;

    while(gecici->sonraki != NULL){
        gecici = gecici -> sonraki;
    }

    gecici->sonraki = yeni_durak;
}

void vagonPatlat(int vagon_id){
    struct Durak * gecici = tepe;
    struct Durak * onceki = NULL;
    
    if (gecici != NULL && gecici->id == vagon_id) {
        tepe = gecici->sonraki;
        free(gecici);
        return;
    }

    while (gecici != NULL && gecici->id != vagon_id){
        onceki = gecici;
        gecici = gecici->sonraki;
    }

    if (gecici == NULL){
        return;
    }

    onceki->sonraki = gecici->sonraki;
    free(gecici);
}

void rotayiYazdir(){
    struct Durak * gecici = tepe;
    printf("--- Duraklar ---\n");
    while (gecici != NULL){
        printf("Durak: %d\n", gecici->id);
        gecici = gecici -> sonraki;
    }
}

int main() {
    for (int i = 1; i <=10; i++){
        sonaEkle(i);
    }
    vagonPatlat(5);
    rotayiYazdir();
    return 0;
}