#include <stdio.h>

int main (){

    int n, i;
    int prime=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=2; i<n; i++)
    {
        if(n%i==0){
            prime=1;
        }
    }
        if (prime==0){
        printf("%d is a Prime Number", n );
        }
        else{
        printf("%d is a Composite number", n);
        }
    return 0; 
}

