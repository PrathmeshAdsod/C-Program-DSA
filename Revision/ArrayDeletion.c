
#include<stdio.h>
// n is size


int display(int arr[] , int n) {
    for(int i = 0; i<n ;i++) {
        printf("Element is %d \n",arr[i]);
    }
}

int Delete(int arr[], int n , int capacity , int index) {

    if(n >= capacity) {
        printf("Size is greater than Capacity\n");
        return -1;
    }
    for(int i = index; i < n; i++) {
        arr[i] = arr[i+1];
    }
}


int main() {

    int arr[] = {20,30,40,60,70};
    int n = 5;
    int capacity = 20;
    int element = 50;
    int index = 0;
    printf("Array Before Deletion \n");
    display(arr,n);
    printf("Array After Deletion \n");

    n--;  // n-- becoz size is decresing of an array

    Delete(arr,n,capacity,index);

    display(arr,n);
  

    return 0;
}