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
 /*   // Different Method
            // rows
        for (int i=1; i<=n; i++){
            // space
            for(int j=1; j<= n-i; j++){
                printf(" ");
            }
                // stars
                for(int j=1; j<=i; j++){
                printf("*");
                }

          }
*/
        