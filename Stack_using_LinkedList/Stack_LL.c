
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int Traversal(struct Node* ptr) {
    while(ptr != NULL) {
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }
    return 0;
}

 int isEmpty(struct Node* top) {
      if(top == NULL) {
          return 1;           // True
      }else {
          return 0;           //False
      }
}

int isFull(struct Node* top) {
          struct Node* p = (struct Node*)malloc(sizeof(struct Node));
          if(p==NULL) {
              return 1;    // True
          }else {
              return 0;    // False
          }
}

struct Node* push(struct Node* top , int val) {
        if(isFull(top)) {
            printf("Stack Overflow Occured\n");
        }else{
            struct Node* n = (struct Node*)malloc(sizeof(struct Node));
            n->data = val;
            n->next = top;
            top = n;
            return top;
        }
}
int pop(struct Node** top) {              // Smjl Nahi
    if(isEmpty(top)) {
        printf("Stack Underflow");
    }
    else {
        struct Node* n = *top;
        *top = (*top)->next;
        int val = n->data;
        free(n);
        return val;
    }
}

int main() {

    struct Node* top = NULL;
    top = push(top,34);
    top = push(top,33);
    top = push(top,33);
    top = push(top,36);
    top = push(top,37);
    top = push(top,38);
    top = push(top,39);
    top = push(top,44);
    top = push(top,55);
    top = push(top,77);
    top = push(top,53);
    top = push(top,23);
    Traversal(top);
  
    printf("Popped Element is %d\n",pop(&top));
     printf("Popped Element is %d\n",pop(&top));
      printf("Popped Element is %d\n",pop(&top));
       printf("Popped Element is %d\n",pop(&top));
        printf("Popped Element is %d\n",pop(&top));
    return 0;

}    