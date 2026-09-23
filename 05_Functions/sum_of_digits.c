#include <stdio.h>

int sum_of_digits(int n);

int main(){
    
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int sum = sum_of_digits(n);
    printf("Sum of digits: %d", sum);

    return 0;
}

int sum_of_digits(int n){

    int sum=0;
      while(n!=0){
            int last_digit = n%10;
            sum += last_digit;
            n = n/10;
      }

    return sum;
}
