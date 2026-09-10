#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("You Have Enter First Number: %d\n", a);
    printf("You Have Enter Second Number: %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("====After Swaping====\n");

    printf(" First Number: %d \n", a);
    printf(" Second Number: %d \n", b);
    return 0;
}
