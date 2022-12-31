


#include<stdio.h>

int printArray(int* A , int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubbleSort(int* A , int n) {
    int temp;
    for(int i = 0; i < n-1 ; i++) {          // for number of pass

        for(int j = 0; j < n-1-i ; j++ ) {       // for number of comparison in each pass

               if(A[j] > A[j+1]){

                   temp = A[j];
                   A[j] = A[j+1];
                   A[j+1] = temp;

               }

        }         

    }
}

int main() {

    int A[] = {9,8,55,20,34,22};
    int n = 6;
    printf("Before Bubble Sort\n");
    printArray(A,n);
    bubbleSort(A,n);
    printf("Bubble Sort make it in Ascending Order\n");
    printArray(A,n);


    return 0;
}









