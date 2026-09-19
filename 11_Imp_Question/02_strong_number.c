#include <stdio.h>
#include <math.h>

    int main(){

        int n;//145
        printf("Enter the number: ");
        scanf("%d", &n);

        int copy = n;
        int count = 0;
        int sum = 0;
        int fact=1;

        // count the digits
        while(n > 0){
            n = n/10;
            count++;
        }
         n = copy;

         while(n > 0){
            int last = n%10; // Gives the last digit
            fact=1;

                // Factorial 
                for(int j=last; j>=1; j--){
                    fact*=j;
                }

            // printf("%d ", fact); 
            sum += fact;
            n=n/10; // Removes the last digit
         }
         printf("\n");
         printf("Sum of the factorial is %d\n", sum);

         if( sum==copy ){
            printf("It is a Strong Number");
         }else
         printf("It is not a Not a Strong Number");

     return 0;

}
