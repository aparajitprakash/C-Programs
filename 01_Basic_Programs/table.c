#include <stdio.h>

int main (){

    int n, j;
        printf("Enter the number : ");
        scanf("%d" , &n );

        printf("Table of %d till : " ,n );
        scanf("%d" , &j );

        printf("Table of  %d is \n", n );

        
     for(int i=1; i<=j ; i++){
        printf( "%dx%d = %d\n", n, i, n*i );
    }
        return 0;

}