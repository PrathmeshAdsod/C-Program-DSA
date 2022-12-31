#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node *next;
};
void myTraversal(struct Node *head)
{
    struct Node* ptr = head;
    do {
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

struct Node* insertAtFirst(struct Node* head , int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head->next;
    ptr->data = data;
    while(p->next != head) {
        p = p->next;
    }
    p->next = ptr;
    ptr -> next = head;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocating memory for nodes in heap in linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //Link head and second Node
    head->data = 9;
    head->next = second;
    //Link second and third Node
    second->data = 7;
    second->next = third;
    //Link third and fourth Node
    third->data = 2;
    third->next = fourth;
    //Link fourth and NULL Node
    fourth->data = 3;
    fourth->next = head;  // Dont give connection to NULL 

    myTraversal(head);
    head = insertAtFirst(head,27);
    myTraversal(head);

    return (0);
}
