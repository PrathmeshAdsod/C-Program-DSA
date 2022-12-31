
#include <stdio.h>

int delete(int myarr[],int size,int capacity,int index) {

       if(size >= capacity) {
           printf("Size is greater than Capacity\n");
           return -1;
       }   
       
       for(int i = index;i < size ;i++) {
           myarr[i] = myarr[i+1];         
       }
       
       for(int i=0; i< size; i++) {        // This will print Array from 0 to size
           printf("%d\n",myarr[i]);
       }
       return 1;
}

int main() {
  int myarr[] = {7,3,9,2};

  for(int k ; k < 4 ; k++) {
         printf("%d\n",myarr[k]);
  }
  
  int size = 4 ,capacity = 8 ,index = 2;
  size --;
 
  delete(myarr,size,capacity,index);

}


