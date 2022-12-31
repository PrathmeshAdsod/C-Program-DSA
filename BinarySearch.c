
#include <stdio.h>

int BinaryS (int arr[],int size,int element) {
    int low,mid,high;
    low = 0;
    high =size - 1;

 
 while(low <= high) {
        mid=(low+high)/2;
    if(arr[mid] == element) {
        return mid;
    }
    else if(arr[mid] < element) {
        low = mid + 1;
    }else {
        high = mid - 1;
    }
}
return -1;
}

int main()  {


    int arr[] = {20,30,40,50,60,70,80,90};
    int size =   sizeof(arr) / sizeof(int);                // For size of array  
    int element = 502;
    int search = BinaryS(arr,size,element);
    printf("The Element %d was found at index %d \n",element,search);
    if(search == -1) {
        printf("The value not found");
    }
    return 0; 


}