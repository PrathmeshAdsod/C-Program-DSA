
#include <stdio.h>
#include <stdlib.h> // we used melloc function

struct Node
{
    int data;
    struct Node *next;
};
void Traversal(struct Node *ptr)
{
    int count=0;            // Now linked list count is 0
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
        count++;    // Linked List count is incremented
    }
    printf("Nodes present in Linked List are %d\n",count);    // Will print how much nodes are in linked list
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating memory for nodes in heap in linked list
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second Node
    head->data = 7;
    head->next = second;
    //Link second and third Node
    second->data = 9;
    second->next = third;
    //Link third and NULL Node
    third->data = 2;
    third->next = NULL;

    Traversal(head);

    return 0;
}


