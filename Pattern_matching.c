#include<stdio.h>
#include<string.h>


char mstr[20];
char pattern[5];
int ml , pl;

int pattern_matching() {

    int i,j,k;

    for(i = 0; i<ml-pl+1 ; i++) {
        
        j = i;

        for(k = 0; k<pl ; k++) {
            if(pattern[k] != mstr[j]) {
                break;
            }
            j++;
        
        }
            if(k==pl) {
                return i;
            }
       
    }
     return -1;
}     

int main() {
        int index;

        printf("Enter the STRING : \n");
        scanf("%s",&mstr);

        printf("Enter the PATTERN : \n");
        scanf("%s",&pattern);

        ml = strlen(mstr);
        pl = strlen(pattern);

        index = pattern_matching();

        if(index == -1) {
            printf("Patter is not found at any index \n");
        }
        else {
            printf("Pattern is found at index %d \n",index);
        }
    

    return 0;

}


