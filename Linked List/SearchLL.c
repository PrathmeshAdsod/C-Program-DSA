
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

void Search(struct Node* ptr) {

    


    

    while (ptr != NULL)
    {
        if(value == ptr->data) {
             printf("The Value is found\n");
             break;
        }
        ptr = ptr->next;
    }
    if(ptr == NULL) {
        printf("The value is not found\n");
    }
    

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
        int value;
    printf("Enter the value to be Searched\n");
    scanf("%d\n",&value);

    Search(head);
    

    return 0;
}

