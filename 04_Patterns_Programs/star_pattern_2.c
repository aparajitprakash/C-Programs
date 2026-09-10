// 19-08-26
/*---  star-2  ------
         *
        **
       ***
      ****
     *****    
              */
#include <stdio.h>

int main(){

    int i, j;
    int n= 5;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i+j>=n-1){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }

}