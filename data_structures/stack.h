#ifndef EMBEDDED_DSA_STACK_H
#define EMBEDDED_DSA_STACK_H

struct StackNode {
    int id;
    struct StackNode * next;
};

void push(int new_value);
int pop();

#endif //EMBEDDED_DSA_STACK_H