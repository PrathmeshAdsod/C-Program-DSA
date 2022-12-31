#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node *next;
};
void myTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); // Dynamic memory given to ptr
    struct Node *p = head;  // p is pointing to head of node
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
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
    head->data = 20;
    head->next = second;
    //Link second and third Node
    second->data = 30;
    second->next = third;
    //Link third and fourth Node
    third->data = 40;
    third->next = fourth;
    //Link fourth and NULL Node
    fourth->data = 50;
    fourth->next = NULL;

    myTraversal(head);

    head = insertAtFirst(head, 55);

    printf("After Insertion at first Node\n");

    myTraversal(head);

    head = insertAtIndex(head, 99, 2 );

    printf("After Insertion at Middle Node\n\n");

    myTraversal(head);

    printf("After Insertion at End\n");
    head = insertAtEnd(head, 29);

    myTraversal(head);

    return (0);
}
