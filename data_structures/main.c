#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "linkedlist.h"

int main() {
    // Stacks
    printf("[1] Stack (Acil Durum Hataları) Test Ediliyor...\n");
    push(404);
    push(505);
    printf("Kritik Hata Gideriliyor: %d\n", pop());
    printf("Sonraki Hata Gideriliyor: %d\n\n", pop());


    // Queues
    printf("[2] Queue (Sensör Veri Sırası) Test Ediliyor...\n");
    enqueue(1);
    enqueue(2);
    printf("İşlenen Sinyal: %d\n", dequeue());
    printf("İşlenen Sinyal: %d\n\n", dequeue());


    // Linked Lists
    printf("[3] Linked List (Rota Yönetimi) Test Ediliyor...\n");
    addToLast(101);
    addToLast(102);
    addToLast(103);

    printf("Mevcut Rota Durakları:\n");
    printRoute();

    printf("\n2. Durak İptal Ediliyor...\n");
    destroyWagon(102);

    printf("Güncel Rota:\n");
    printRoute();

    return 0;
}