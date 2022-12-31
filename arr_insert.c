#include <stdio.h>

// Array Traversing
int display(int arr[],int n ) {
       for(int i = 0; i<n; i++) {
           printf("%d \n" , arr[i]);
       }
      
}
// Insertion

int myInsertion(int myarr[],int size,int element,int capacity,int index) {
// code for insertion
    if(size >= capacity) {
         return -1;   // we return -1 becoz our insertion is not succesfull
    }
    for (int i = size - 1; i>=index ; i--) {
          myarr[i+1] = myarr[i];
    }
    myarr[index] = element;
    return 1;         // 1 is for success

}

int main() {
    int myarr[] = {5,5,3,3};
    int size = 4,
        element = 45,
        capacity = 40,
        index = 2;
    printf("Before Insertion while Traversing\n");
    display(myarr,size);

    size += 1 ;
    myInsertion(myarr,size,element,capacity,index);   // myInsertion is function that i made
    
    printf("After Insertion \n");
    display(myarr,size);  // display function calling after myInsertion function is IMP.
    
    return 0;
}