
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}
int preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
    else
    {
        return 0;
    }
}
int postorder(struct node* root) {
    if(root != NULL) {
      
        postorder(root->left);
        postorder(root->right);
          printf("%d ",root->data);
     
    }else {
        return 0;
    }
}
int inorder(struct node* root) {
    if(root != NULL) {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }else {
        return 0;
    }
}

int main()
{

    struct node *p = create(3);
    struct node *p2 = create(6);
    struct node *p3 = create(9);
    struct node *p4 = create(27);
    struct node *p5 = create(33);

    p->left = p2;
    p->right = p3;

    p2->left = p4;
    p2->right = p5;

printf("Preorder Traversal\n");
    preorder(p);
    printf("\nPostorder Traversal\n");
    postorder(p);
    printf("\nInorder Traversal\n");
    inorder(p);

    return 0;
}