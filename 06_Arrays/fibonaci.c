#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number you want for Fibonaci : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    // 0 1 1 2 3 5 8 13 21 34

    printf(" %d \t", fib[0]);
    printf(" %d \t ", fib[1]);

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }
    
    return 0;
}
