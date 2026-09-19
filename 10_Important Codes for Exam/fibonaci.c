#include <stdio.h>

    int main(){

        int n;
        printf("Enter the number: ");
        scanf("%d", &n);

        int first = 0;
        int second = 1;
        int sum = 0; 
     
        for(int i=1; i<=n; i++){

            printf("%d ", first);

            sum = first + second;
            first = second;
            second = sum;

        }

    return 0;

}
