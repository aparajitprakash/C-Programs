#include <stdio.h>

int main (){
    int p,t;
    float r,I;

    printf("Enter the principal: ");
    scanf("%d", &p );

    printf("Enter the rate: ");
    scanf("%f", &r );

    printf("Enter the time: ");
    scanf("%d", &t );

    I= (p*r*t)/100;
    printf("Simple Interest of %d is %.3f ", p, I );

 return 0;
}
