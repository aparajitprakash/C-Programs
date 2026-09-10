// 18-08-26
#include <stdio.h>

int main(){
    
    int n, i, j;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++)
    {
 
        for (j=1; j<=i; j++)
        {
            printf("%d", j);

        }

        printf("\n");
     
    } 
 return 0;
}

/*
  ---OUTPUT---printf("%d", j);
    1
    12
    123
    1234
    12345
         */


/*---if [ printf("%d", i); ]-----
    1
    22
    333
    4444
    55555
           */