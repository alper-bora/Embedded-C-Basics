#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct QueueNode * first = NULL; //Queue start
struct QueueNode * last = NULL; //Queue finish

void enqueue(int new_value)
{
    struct QueueNode * toAdd = malloc(sizeof(struct QueueNode));
    toAdd->id = new_value;
    toAdd->next = NULL;

    if (last == NULL)
    {
        first = toAdd;
        last = toAdd;
        return;
    }
    last->next = toAdd;
    last = toAdd;
}

int dequeue()
{
    int salvaged_value;
    if (first == NULL)
    {
        printf("Queue is empty!");
        return -1;
    }
    struct QueueNode * toDelete = first;
    salvaged_value = toDelete->id;
    first = first->next;
    if (first == NULL) last = NULL;
    free(toDelete);
    return salvaged_value;
}