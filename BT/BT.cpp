#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;

TreeNode* createTreeNode(int x){
    TreeNode* t = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    t->data = x;
    t->left = NULL;
    t->right = NULL;

    return t;
}

void printTree(TreeNode* root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);
    printTree(root->left);
    printTree(root->right);
    
}
int main()
{
    TreeNode* root = createTreeNode(5);
    root->left = createTreeNode(6);
    root->right = createTreeNode(7);
    root->left->left = createTreeNode(1);
    root->left->right = createTreeNode(2);

    printTree(root);
}

