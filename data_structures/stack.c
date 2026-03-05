#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct StackNode * head = NULL;

void push(int new_value)
{
    struct StackNode  * new_wagon = malloc(sizeof(struct StackNode));
    new_wagon->id = new_value;
    new_wagon->next = head;
    head = new_wagon;
}

int pop()
{
    if (head == NULL)
    {
        printf("Stack is empty!");
        return -1;
    }
    struct StackNode * toDelete = head;
    head = head->next;
    int salvaged_value = toDelete->id;
    free(toDelete);
    return salvaged_value;
}