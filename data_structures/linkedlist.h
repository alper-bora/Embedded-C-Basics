#ifndef EMBEDDED_C_BASICS_LINKEDLIST_H
#define EMBEDDED_C_BASICS_LINKEDLIST_H

struct LinkedNode{
    int id;
    struct LinkedNode * sonraki;
};
void sonaEkle(int yeni_id);
void vagonPatlat(int vagon_id);
void rotayiYazdir();

#endif //EMBEDDED_C_BASICS_LINKEDLIST_H