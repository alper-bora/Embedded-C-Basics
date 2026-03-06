#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "linkedlist.h"
#include "tree.h"

int main() {
    // Binary Trees
    printf("[0] Testing Binary Tree (GPS)...\n");
    struct TreeNode* root = createNode(50);
    insertNode(root, 10);
    insertNode(root, 25);
    insertNode(root, 75);
    printf("New Node: %d, %d, %d.\n\n", root->data, root->left->data, root->right->data);

    printf("Preorder Traversal:\n");
    printPreorder(root);
    printf("\n");

    printf("Inorder Traversal:\n");
    printInorder(root);
    printf("\n");

    printf("Postorder Traversal:\n");
    printPostorder(root);
    printf("\n");

    if (searchNode(root,25) == 1) printf("Node found!\n\n");
    else printf("Node not found!\n\n");
    if (searchNode(root,100) == 1) printf("Node found!\n\n");
    else printf("Node not found!\n\n");

    printf("Stop number 50 is being deleted...\n");
    root = deleteTreeNode(root, 50);
    printf("New Route (Inorder): \n");
    printInorder(root);
    printf("\n\n");

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

    printf("Current Route:\n");
    printRoute();

    return 0;
}