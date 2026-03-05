#ifndef EMBEDDED_DSA_STACK_H
#define EMBEDDED_DSA_STACK_H

struct StackNode {
    int id;
    struct StackNode * sonraki;
};

void push(int yeni_deger);
int pop();

#endif //EMBEDDED_DSA_STACK_H