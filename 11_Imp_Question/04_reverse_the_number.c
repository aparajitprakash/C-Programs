// 17-08-26
#include <stdio.h>

int main (){

    int n, digit, reverse=0;

    printf("Enter the number: ");
    scanf("%d", &n);


     while(n!=0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;

    }
        printf("Done! Reverse: %d", reverse);

    return 0; 
}


/* n → original number
   digit → last digit temporarily store karega
   reverse → reversed number banayega     */


/*  digit = n % 10;                  // Last digit nikalo
    reverse = reverse * 10 + digit;  // Reverse mein add karo
    n = n / 10;                      // Last digit hatao  */


/*  ----EXAMPLE= 1234----
    digit = 1234 % 10 → 4
    reverse = 0 * 10 + 4 → 4
    n = 1234 / 10 → 123

    digit = 123 % 10 → 3
    reverse = 4 * 10 + 3 → 43
    n = 123 / 10 → 12

    digit = 12 % 10 → 2
    reverse = 43 * 10 + 2 → 432
    n = 12 / 10 → 1

    digit = 1 % 10 → 1
    reverse = 432 * 10 + 1 → 4321
    n = 1 / 10 → 0                */