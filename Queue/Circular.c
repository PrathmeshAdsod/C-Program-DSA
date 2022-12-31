


#include <stdio.h>
#include <stdlib.h>

struct cricularqueue
{
    int size;
    int f; // f for front
    int r; // r for rare
    int *arr;
};

int isFull(struct cricularqueue *q)
{
    if ((q->r+1)%q->size == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct cricularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int encricularqueue(struct cricularqueue *q, int val)
{
    if (isFull(q))
    {
        printf("The cricularQueue is Full , you Cant Enque in it\n");
    }
    else
    {
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
    }
}

int decricularqueue(struct cricularqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Thw Given cricularQueue is Empty , you cannot get him/her out\n");
    }
    else
    {
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct cricularqueue q;
    q.size = 20;
    q.f = q.r = -1; // -1 represents that cricularqueue is Empty
    q.arr = (int *)malloc(q.size * sizeof(int));

    /*      ------    We use & Becoz of pointers      -------             */

    printf("Enquing Element %d \n", encricularqueue(&q, 20));
    printf("Enquing Element %d \n", encricularqueue(&q, 30));
    printf("Enquing Element %d \n", encricularqueue(&q, 40));
    printf("Enquing Element %d \n", encricularqueue(&q, 50));
    printf("Enquing Element %d \n", encricularqueue(&q, 60));
    printf("Enquing Element %d \n", encricularqueue(&q, 70));
    printf("Enquing Element %d \n", encricularqueue(&q, 80));
    printf("Enquing Element %d \n", encricularqueue(&q, 90));

    printf("Dequeing Element %d \n", decricularqueue(&q));
    printf("Dequing Element %d \n", decricularqueue(&q));
    printf("Dequing Element %d \n", decricularqueue(&q));
    printf("Dequing Element %d \n", decricularqueue(&q));
    printf("Dequing Element %d \n", decricularqueue(&q));

    return 0;
}

