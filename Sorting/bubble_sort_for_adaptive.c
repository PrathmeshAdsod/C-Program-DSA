



#include<stdio.h>

int printArray(int* A , int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bubbleSort(int* A , int n) {
    int temp;
    int isSorted = 0;
    for(int i = 0; i < n-1 ; i++) {          // for number of pass

        int isSorted = 1;

        for(int j = 0; j < n-1-i ;j++ ) {       // for number of comparison in each pass

               if(A[j] > A[j+1]){

                   temp = A[j];
                   A[j] = A[j+1];
                   A[j+1] = temp;
                   isSorted = 0;

               }

        }   
        if(isSorted) {
            return;
        }      

    }
}

int main() {

    
    int A[] = {20,30,40,50,60,70};
    int n = 6;
    printArray(A,n);
    bubbleSort(A,n);
    printArray(A,n);


    return 0;
}