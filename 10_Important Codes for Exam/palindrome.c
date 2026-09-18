#include <stdio.h>

    int main(){

        int n;
        printf("Enter the number: ");
        scanf("%d", &n);

        int copy = n;

        int lastDigit;
        int rev = 0;
        while( n!=0 ){

            lastDigit= n%10;
            rev = rev * 10 + lastDigit;
            n = n/10;

        }
        printf("Reverse: %d\n", rev);

     printf(rev==copy ? "Palindrome\n" : "Not Palindrome\n" );

    return 0;

}
