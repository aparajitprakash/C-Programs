#include <stdio.h>
#include <math.h>

    int main(){

        int n;
        printf("Enter the number: ");
        scanf("%d", &n);

        int copy = n;
        int count = 0;
        double sum = 0;

        // count the digits
        while(n > 0){
            n = n/10;
            count++;
        }
         n = copy;

         while(n > 0){
            int last = n%10;
            sum += pow(last, count); // sum += (int)round(pow( last, count));
            n=n/10;
         }

         if ( sum==copy ){
            printf("Armstrong Number");
         }else
            printf("Not a Armstrong Number");

    return 0;

}
