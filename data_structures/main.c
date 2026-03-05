#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "linkedlist.h"

int main() {
    // Stacks
    printf("[1] Testing Stack (Emergency Errors)...\n");
    push(404);
    push(505);
    printf("Fixing Critical Errors: %d\n", pop());
    printf("Fixing the Next Error: %d\n\n", pop());


    // Queues
    printf("[2] Testing Queue (Sensor Data Queue)...\n");
    enqueue(1);
    enqueue(2);
    printf("Processed Signal: %d\n", dequeue());
    printf("Processed Signal: %d\n\n", dequeue());


    // Linked Lists
    printf("[3] Testing Linked List (Route Management)...\n");
    addNode(101);
    addNode(102);
    addNode(103);

    printf("Current Stops in the Route:\n");
    printRoute();

    printf("\n2. Canceling the stop...\n");
    deleteNode(102);

    printf("Current Rouet:\n");
    printRoute();

    return 0;
}