#include <stdio.h>

    int main(){

        int n;//145
        int sum = 0;
        printf("Enter the number: ");
        scanf("%d", &n);

        while( n>0 || sum>9 ){

            if (n==0){
              n = sum;
              sum = 0;
            }
            
            int last_digit = n%10;// Gives the last_digit
            sum += last_digit;
            n = n/10;// Removes last_digit
            
        }                
           printf("%d\n ",sum);
        
        if( sum==1 ){
            printf("Special Number");
        }else
            printf("Not a Special Number");

    return 0;

}
