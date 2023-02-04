#include<stdio.h>

typedef struct Node{
    int info;
    Node *left;
    Node *right;
} Node;

void takeInput(Node* root){
    printf("Input of this root: ");
    int val;
    scanf("%d", &val);
    root->info = val;

    short choice;
    printf("Does it have Left? [1=>Yes, 0=>No:] ");
    scanf("%d", &choice);

    if(choice){
        Node n;
        root->left = &n;
        takeInput(&n);
    }else{
      root->left = NULL;
    }

    printf("Does it have Right? [1=>Yes, 0=>No:] ");
    scanf("%d", &choice);

    if(choice){
        Node n;
        root->right = &n;
        takeInput(&n);
    }else{
      root->right = NULL;
    }
}

void traverse(Node* n){
  printf("%d ", n->info);
  if(n->left!=NULL){
    traverse(n->left);
  }
  if(n->right!=NULL){
    printf("%d ", n->right->info);
  }
}

int main(){
    Node n;
    takeInput(&n);
    printf("\n--Traverse begin--\n");
    traverse(&n);
    return 0;
}

// input
// 100 1 50 0 0 1 70 0 0
// expected output 100 50 70