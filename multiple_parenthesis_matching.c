

// This Code is Not Correct .... and not complete



// Stack Data Structure 
// Stack using Array

#include<stdio.h>
#include<stdlib.h>

struct stack {
     int size;
     int top;
     char * arr;
};

int isEmpty(struct stack* ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct stack* ptr) {
    if(ptr->top == ptr->size - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(struct stack *ptr, char val)
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
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int parenthesisMatch(char * exp) {
   
    struct stack *sp = (struct stack * ) malloc (sizeof(struct stack));
    sp->size = 50;
    sp->top = -1;
    char popped_ch;
    sp->arr = (char *)malloc(sp->size * sizeof(char)); 

    for(int i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(sp , exp[i]);
        }else if(exp[i] == ')') {
            if(isEmpty(sp)) {
                return 0;
            }
            char popped_ch = pop(sp);
            if()
        }
    }
    if(isEmpty(sp)) {
        return 1;
    }else {
        return 0;
    }

    
}

int main() {
    
 
    char * exp = "8*(9))))";   // This Expression will Evaluate

    if(parenthesisMatch(exp)) {
        printf("Parenthesis matching\n");
    }else {
        printf("Parenthesis not matching\n");
    }

    return 0;
}








