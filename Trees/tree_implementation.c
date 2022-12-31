
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * left;
    struct node * right;
};

struct node* create(int data) {
    struct node * newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

int main() {

    struct node* p =  create(3);
    struct node* p2 = create(3);
    struct node* p3 = create(3);
    struct node* p4 = create(3);
    struct node* p5 = create(3);

    p -> left = p2;
    p -> right = p3;

    p2 -> left = p4;
    p2 -> right = p5;



return 0;
    
}