
#include <stdio.h>
int i ;
int linearSearch (int arr[],int size,int element) {
    for(int i=0; i<size ; i++) {
        if(arr[i]==element) {
            return i;
        }
    }
    if(i==size) {
        printf("The number not found");
    }
} 

int main()  {
    
    int arr[] = {30,50,60,70,80,90,40,20};
    int size = 8; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 880;
    int searchIndex = linearSearch(arr,size,element);
    printf("The Element %d was found at index %d \n",element,searchIndex);

}