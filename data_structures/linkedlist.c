#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

struct LinkedNode * list_head = NULL; //Stacks GPS

void addNode(int new_id){
    struct LinkedNode * new_stop = malloc(sizeof(struct LinkedNode));
    new_stop -> id = new_id;
    new_stop -> next = NULL;

    if (list_head == NULL){
        list_head = new_stop;
        return;
    }

    struct LinkedNode * temp = list_head;

    while(temp->next != NULL){
        temp = temp -> next;
    }

    temp->next = new_stop;
}

void deleteNode(int wagon_id){
    struct LinkedNode * temp = list_head;
    struct LinkedNode * previous = NULL;

    if (temp != NULL && temp->id == wagon_id) {
        list_head = temp->next;
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
    struct LinkedNode * temp = list_head;
    printf("--- Stops ---\n");
    while (temp != NULL){
        printf("Stop: %d\n", temp->id);
        temp = temp -> next;
    }
}