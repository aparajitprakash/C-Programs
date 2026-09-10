#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the largest in these three numbers", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest in these three numbers", b);
    }

    else if (c > a && c > b)
    {
        printf("%d is the largest in these three numbers", c);
    }
}
