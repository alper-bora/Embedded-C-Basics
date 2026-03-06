#ifndef EMBEDDED_C_BASICS_TREE_H
#define EMBEDDED_C_BASICS_TREE_H

struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value);
struct TreeNode* insertNode(struct TreeNode* root, int value);
struct TreeNode* deleteTreeNode(struct TreeNode* root, int key);
int searchNode(struct TreeNode* root, int target);
void printInorder(struct TreeNode* root);
void printPreorder(struct TreeNode* root);
void printPostorder(struct TreeNode* root);

#endif //EMBEDDED_C_BASICS_TREE_H