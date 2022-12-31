#include<stdio.h>

void printArray(int *A , int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertion(int *A , int n) {

    for (int i = 0; i <= n-1 ; i++)
    {
        int key = A[i];
        int j = i - 1;

        while (A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key ;
        
    }
    

}

int main() {

    int A[] = {2,9,7,4,20,3};
    int n = 6;
    printArray(A , n);
    insertion(A , n);
    printArray(A,n);

    return 0;
}