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

struct Node *DeleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *DeleteAtIndex(struct Node *head,int index)
{
    struct Node* p = head;
    struct Node* q = head->next;
    for(int i = 0; i < index - 1;i++) {
       p = p->next;
       q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
    
}
struct Node *DeleteLast(struct Node *head)
{
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
       q = q->next;
    }
    
    p->next = NULL;
    free(q);
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

    printf("After Deletion At First Node\n");
    head = DeleteFirst(head);
    myTraversal(head);

    printf("After Deletion At Index Node\n");
    head = DeleteAtIndex(head,2);
    myTraversal(head);
    printf("After Deletion At Last Node\n");
    head = DeleteLast(head);
    myTraversal(head);
    return (0);
}
