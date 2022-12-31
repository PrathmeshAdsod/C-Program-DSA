
// Stack Data Structure 
// Stack using Array

#include<stdio.h>
#include<stdlib.h>

struct stack {
     int size;
     int top;
     int * arr;
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

int main() {
    struct stack * s;
    s->size = 20;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int)); 


    // Check Wether stack is Empty or Not
    if(isEmpty(s)) {
        printf("The Stack is Empty\n");
    }else {
        printf("The Stack is Not Empty\n");
    }

    // Check Wether stack is Full or Not
    if(isFull(s)) {
        printf("The Stack is Full\n");
    }else {
        printf("The Stack is Not Full\n");
    }

    return 0;
}


