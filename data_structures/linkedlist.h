#ifndef EMBEDDED_C_BASICS_LINKEDLIST_H
#define EMBEDDED_C_BASICS_LINKEDLIST_H

struct LinkedNode{
    int id;
    struct LinkedNode * next;
};
void addToLast(int new_id);
void destroyWagon(int wagon_id);
void printRoute();

#endif //EMBEDDED_C_BASICS_LINKEDLIST_H