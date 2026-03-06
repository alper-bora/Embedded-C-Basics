#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct TreeNode* createNode(int value)
{
    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* insertNode(struct TreeNode* root, int value)
{
    if (root == NULL)
    {
        return createNode(value);
    }

    if (value < root->data) root->left = insertNode(root->left, value);

    else if (value > root->data) root->right = insertNode(root->right, value);

    return root;
}

int searchNode(struct TreeNode* root, int target)
{
    if (root == NULL) return 0;
    if (target ==root->data) return 1;
    if (target < root->data) return searchNode(root->left, target);
    if (target > root->data) return searchNode(root->right, target);
    return 0;
}

void printInorder(struct TreeNode* root)
{
    if (root != NULL)
    {
        printInorder(root->left);
        printf("%d ", root->data);
        printInorder(root->right);
    }
    else return;
}

void printPreorder(struct TreeNode* root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        printInorder(root->left);
        printInorder(root->right);
    }
    else return;
}

void printPostorder(struct TreeNode* root)
{
    if (root != NULL)
    {
        printInorder(root->left);
        printInorder(root->right);
        printf("%d ", root->data);
    }
    else return;
}

struct TreeNode* minValueNode(struct  TreeNode* currentNode)
{
    while (currentNode->left != NULL)
    {
        currentNode = currentNode->left;
    }
    return currentNode;
}

struct TreeNode* deleteTreeNode(struct TreeNode* root, int key)
{
    if (root == NULL) return root;

    if (key < root->data) root->left = deleteTreeNode(root->left, key);
    else if (key > root->data) root->right = deleteTreeNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL)
        {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        struct TreeNode* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteTreeNode(root->right, temp->data);
    }
    return root;
}