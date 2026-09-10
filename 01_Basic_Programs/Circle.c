
#include <stdio.h>

int main (){

    int r,h ;
    float pi;

    printf("Enter the radius: ");
    scanf("%d", &r );

    printf("Enter the heigth: ");
    scanf("%d", &h );

    pi=3.14;
    printf("Volume of a cylinder is %.3f", pi*r*r*h );

    return 0;

}