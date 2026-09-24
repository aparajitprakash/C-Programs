#include <stdio.h>

int sum(int *a, int *b);

int main(){
    
    int a, b;
    printf("Enter the First number: ");
    scanf("%d", &a);
    printf("Enter the Second number: ");
    scanf("%d", &b);

    int sum_of_2 = sum(&a, &b);

    printf("Sum of %d and %d is %d\n", a, b, sum_of_2);
    
    return 0;
    
}

int sum(int *a, int *b){

    int sum = 0;
    sum= *a + *b;

    return sum;

}