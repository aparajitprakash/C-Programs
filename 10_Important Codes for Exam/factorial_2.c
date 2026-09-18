#include <stdio.h>

    int main(){

        int n;
        int fact = 1;
        printf("Enter the number: ");
        scanf("%d", &n);

         printf("Factorial for 1 to %d:\n ",n );  

        for(int j=1; j<=n; j++){
            
            fact = 1;
            for(int i=j; i>=1; i--){

                fact *= i;
            }
            
          printf("Factorial of %d : %d\n", j, fact );  

        }

    return 0;

}
