#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct LinkedNode * head = NULL; //Stacks GPS

void addNode(int new_id){
    struct LinkedNode * new_stop = malloc(sizeof(struct LinkedNode));
    new_stop -> id = new_id;
    new_stop -> next = NULL;

    if (head == NULL){
        head = new_stop;
        return;
    }

    struct LinkedNode * temp = head;

    while(temp->next != NULL){
        temp = temp -> next;
    }

    temp->next = new_stop;
}

void deleteNode(int wagon_id){
    struct LinkedNode * temp = head;
    struct LinkedNode * previous = NULL;

    if (temp != NULL && temp->id == wagon_id) {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->id != wagon_id){
        previous = temp;
        temp = temp->next;
    }

    if (temp == NULL){
        return;
    }

    previous->next = temp->next;
    free(temp);
}

void printRoute(){
    struct LinkedNode * temp = head;
    printf("--- Stops ---\n");
    while (temp != NULL){
        printf("Stop: %d\n", temp->id);
        temp = temp -> next;
    }
}