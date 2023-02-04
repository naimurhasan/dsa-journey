#include <iostream>

typedef struct Node {
    int data;
    Node *left;
    Node *right;
} Node;

Node* takeInput() {
    Node* node = new Node;
    printf("Input of this root: ");
    int val;
    scanf("%d", &val);
    node->data = val;

    node->left = node->right = nullptr;

    short choice;
    printf("Does it have Left? [1=>Yes, 0=>No:] ");
    scanf("%d", &choice);
    if(choice){
        Node n;
        node->left = takeInput();
    }
    
    printf("Does it have Right? [1=>Yes, 0=>No:] ");
    scanf("%d", &choice);

    if(choice){
        Node n;
        node->right = takeInput();
    }

    return node;
}

void preOrder(Node *root) {
    if (root == nullptr) return;
    std::cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    Node *root = takeInput();
    std::cout << "Pre-Order traversal of binary tree is:\n";
    preOrder(root);
    std::cout << "\n";

    return 0;
}
