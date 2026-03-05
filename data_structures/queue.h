#ifndef EMBEDDED_C_BASICS_QUEUES_H
#define EMBEDDED_C_BASICS_QUEUES_H

struct QueueNode{
    int id;
    struct QueueNode * next;
};

void enqueue(int new_value);
int dequeue();

#endif //EMBEDDED_C_BASICS_QUEUES_H