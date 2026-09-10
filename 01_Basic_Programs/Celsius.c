#include <stdio.h>

int main (){
    float c,f;

    printf("Enter the Celsius: ");
    scanf("%f", &c );


    f= (c * 9/5) + 32;
    printf ("Celsius to fahrenheit: %f ", f );
   
    return 0;
}
// (0°C × 9/5) + 32