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

    return (0);
}
