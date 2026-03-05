#ifndef EMBEDDED_C_BASICS_QUEUES_H
#define EMBEDDED_C_BASICS_QUEUES_H

struct QueueNode{
    int id;
    struct QueueNode * sonraki;
};

void enqueue(int yeni_deger);
int dequeue();

#endif //EMBEDDED_C_BASICS_QUEUES_H