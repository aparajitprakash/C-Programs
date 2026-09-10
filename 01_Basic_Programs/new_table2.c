#include <stdio.h>

int main (){

    int n, multi ;

    printf("Enter the number to be multiplyied: ");
    scanf("%d", &n);


    printf("Table of %d is\n", n);

    for(int i=1 ; i<=10 ; i++){

        multi= n*i;
        
        printf("%d x %d= %d\n", n, i, multi);

    }

 return 0;
}
