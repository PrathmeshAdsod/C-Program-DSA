
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

int isEmpty(struct stack* ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    else {
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

    printf("Popped %d from stack \n", pop(pp));
    printf("Popped %d from stack \n", pop(pp));
    printf("Popped %d from stack \n", pop(pp));
    printf("Popped %d from stack \n", pop(pp));
    printf("Popped %d from stack \n", pop(pp));



    return 0;
}
