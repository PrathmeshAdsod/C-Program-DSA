

// Solution of Algorithm

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
     
     // Step 1
     float A,B,C,D,X,X1,X2;

     printf("Enter the Values of A B and C : \n");
     scanf("%f %f %f ",&A , &B , &C);
     
     // Step 2
     D = B*B - 4*A*C;

     if(D > 0) {
         X1 = (-1 * B + sqrt(D) )/2*A;
         X2 = -1 * B - sqrt(D)/2*A;

         printf("Value of X1 is %.2f and X2 is %.2f",X1,X2);
     }

     else if(D==0) {
         X = (-1)*B / 2*A;
         printf("UNIQUE SOLUTION X = %.2f",X);
     }
     else {
         printf("No Solution");
     }



}