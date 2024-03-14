#include <stdio.h>
#include <stdlib.h>

// Define the structure for a BST node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the BST
struct Node* insert(struct Node* root, int value) {
    if (!root) {
        return createNode(value);
    }
    if (value > root->data) {
        root->right = insert(root->right, value);
    } else if (value < root->data) {
        root->left = insert(root->left, value);
    }
    return root;
}

// Function to perform an inorder traversal of the BST
void inorder(struct Node* root) {
    if (!root) {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);


    inorder(root);

    return 0;
}

