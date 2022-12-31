
// Stack using Array

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Push Element in Stack
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int i)
{

    int myarray = ptr->top - i + 1;
    if (myarray < 0)
    {
        printf("Not valid position for stack\n");
    }
    else
    {
        return ptr->arr[myarray];
    }
}

int main()
{

    struct stack *pp = (struct stack *)malloc(sizeof(struct stack));
    pp->size = 5;
    pp->top = -1;
    pp->arr = (int *)malloc(pp->size * sizeof(int));

    printf("Stack is Empty before push : %d\n", isEmpty(pp));

    push(pp, 7);
    push(pp, 8);
    push(pp, 9);
    push(pp, 3);
    push(pp, 4);

    printf("Stack is full after push : %d\n", isFull(pp));


    // For loop for peak
    for (int j = 1; j <= pp->top + 1; j++)
    {
        printf("The Element at position %d from stack is %d\n", j, peek(pp, j));
    }

    printf("Popped %d from stack \n", pop(pp));
    printf("Popped %d from stack \n", pop(pp));
    printf("Popped %d from stack \n", pop(pp));

    return 0;
}
