#include <stdio.h>

// This is Call by Refrence
void swap(int *a, int *b, int temp);

void swap(int *a, int *b, int temp)
{
    temp = *a;
    *a = *b;
    *b = temp;

    printf(" Your First Number: %d \n", *a);
    printf(" Your Second Number: %d \n", *b);
}

int main()
{
    int a, b, temp;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("You Have Enter First Number: %d\n", a);
    printf("You Have Enter Second Number: %d\n", b);

    printf("\n====After Swaping====\n");

    swap(&a, &b, temp);

    printf(" First Number: %d  \n", a);
    printf(" Second Number: %d \n", b);

    return 0;
}
