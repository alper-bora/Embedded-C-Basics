#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct LinkedNode * tepe = NULL; //Stacks GPS

void sonaEkle(int yeni_id){
    struct LinkedNode * yeni_durak = malloc(sizeof(struct LinkedNode));
    yeni_durak -> id = yeni_id;
    yeni_durak -> sonraki = NULL;

    if (tepe == NULL){
        tepe = yeni_durak;
        return;
    }

    struct LinkedNode * gecici = tepe;

    while(gecici->sonraki != NULL){
        gecici = gecici -> sonraki;
    }

    gecici->sonraki = yeni_durak;
}

void vagonPatlat(int vagon_id){
    struct LinkedNode * gecici = tepe;
    struct LinkedNode * onceki = NULL;

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
    struct LinkedNode * gecici = tepe;
    printf("--- Duraklar ---\n");
    while (gecici != NULL){
        printf("Durak: %d\n", gecici->id);
        gecici = gecici -> sonraki;
    }
}