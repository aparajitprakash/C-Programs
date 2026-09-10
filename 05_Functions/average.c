#include <stdio.h>

int sum(int *a, int *b);
void product(int a, int b);
void average(int a, int b);

int sum(int *a, int *b)
{
    int c = *a + *b;
    printf("\nSum is %d", c);
    return c ;
}
void product(int a, int b)
{
    int pro = a * b;
    printf("\nProduct is %d", pro);
}
void average(int a, int b)
{
    float avg = (a + b) / (float)2;
    printf("\nAverage is %.2f", avg);
}

int main()
{
    int a = 5, b = 4, c  ;

    c = sum(&a, &b);
    product(a, b);
    average(a, b);

    printf("\nSum is %d", c );

    return 0;
}




// #include <stdio.h>

// int sum(int a, int b);

// int sum(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int a = 5, b = 4, c;

//     c = sum(a, b);

//     printf("Sum is %d", c);

//     return 0;
// }