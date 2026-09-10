
// Write a program to check whether a number is divisible by 97 or no
#include <stdio.h>

int main (){
    int a, j , q ,d;

    printf("Enter the number to divide : ");
    scanf("%d", &a );

    printf("Enter the divisor : ");
    scanf("%d", &j );

    q = a/j ;
    d = q*j ;
    if( a % j ==0){

        printf("%d is divisible by %d in %d time's ", a , j , q );
    }
    else{
            printf("%d is not divisible by %d and the remainder is %d ", a ,j , a%j  );
            // printf("\nAnd %d is last fully divisible by %d in %d times and %d is left ", a, j ,a/j,d );
        }
  return 0;
    }
