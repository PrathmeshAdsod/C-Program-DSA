#include<stdio.h>
// n is size


int display(int arr[] , int n) {
    for(int i = 0; i<n ;i++) {
        printf("Element is %d \n",arr[i]);
    }
}

int Insert(int arr[] , int n , int capacity , int element, int index)  {
    if(n >= capacity) {
        return -1;
    }
    for (int i = n - 1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    
}

int main() {

    int arr[] = {20,30,40,60,70};
    int n = 5;
    int capacity = 20;
    int element = 50;
    int index = 0;
    printf("Array Before Insertion \n");
    display(arr,n);
    n += 1;
    Insert(arr,n,capacity,element,index);
     printf("Array After Insertion \n");
    display(arr,n);

    return 0;
}