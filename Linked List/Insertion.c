head;
    ptr -> data = data;

    return ptr;
}


int main() {
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fo
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node* next;
};

void Traversal(struct Node* ptr) { 
    while(ptr != NULL) {
        printf("Element is %d\n",ptr -> data);
        ptr = ptr -> next;
    }
}

// Insertion at Start or First
struct Node* insertAtStart(struct Node* head , int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next = urth;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));


    head -> data = 30;
    head -> next = second;

    second -> data = 40;
    second -> next = third;

    third -> data = 50;
    third -> next = fourth;

    fourth -> data = 60;
    fourth -> next = NULL;

    Traversal(head);

     head = insertAtStart(head,20);
     printf("After Insertion at Start : \n");
     Traversal(head);

    return 0;
}



