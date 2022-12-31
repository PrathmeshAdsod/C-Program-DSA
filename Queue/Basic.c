
/*
       Queue is also an abstract data type or a linear data structure, 
       just like stack data structure, in which the first element is
        inserted from one end called the REAR(also called tail), 
        and the removalof existing element takes place from the other
         end called as FRONT(also called head).

*/





#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f; // f for front
    int r; // r for rare
    int *arr;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("The Queue is Full , you Cant Enque in it\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Thw Given Queue is Empty , you cannot get him/her out\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 20;
    q.f = q.r = -1; // -1 represents that queue is Empty
    q.arr = (int *)malloc(q.size * sizeof(int));

    /*      ------    We use & Becoz of pointers      -------             */

    printf("Enquing Element %d \n", enqueue(&q, 20));
    printf("Enquing Element %d \n", enqueue(&q, 30));
    printf("Enquing Element %d \n", enqueue(&q, 40));
    printf("Enquing Element %d \n", enqueue(&q, 50));
    printf("Enquing Element %d \n", enqueue(&q, 60));
    printf("Enquing Element %d \n", enqueue(&q, 70));
    printf("Enquing Element %d \n", enqueue(&q, 80));
    printf("Enquing Element %d \n", enqueue(&q, 90));

    printf("Dequeing Element %d \n", dequeue(&q));
    printf("Dequing Element %d \n", dequeue(&q));
    printf("Dequing Element %d \n", dequeue(&q));
    printf("Dequing Element %d \n", dequeue(&q));
    printf("Dequing Element %d \n", dequeue(&q));

    return 0;
}
