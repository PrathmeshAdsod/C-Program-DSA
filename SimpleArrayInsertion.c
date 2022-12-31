
#include <stdio.h>

int insert(int myarr[],int size,int element,int capacity,int index) {
       if(size >= capacity) {
           printf("Size is greater than Capacity\n");
           return - 1;
       }   
       
       for(int i = size - 1;i >= index;i--) {
           myarr[i+1] = myarr[i];         
       }

       myarr[index] = element;

       for(int i=0; i< size; i++) {
           printf("%d\n",myarr[i]);
       }
       return 1;
}

int main() {
  int myarr[] = {7,8,9,8};
  int size = 4 ,capacity = 8 ,index = 2 ,element = 3 ;
  size ++;
  insert(myarr,size,element,capacity,index);
  

}