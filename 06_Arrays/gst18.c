#include <stdio.h>

int main(){
    
    int a, i, cost ;
    int price[3];

    for (i=0; i<3 ; i++)
    {
        printf("Enter the price of %d :", i + 1);
        scanf("%d", &price[i]);
    }   

         for (i = 0; i < 3; i++)
        {
             float final_price = price[i] + (price[i] * 18/100);

            printf("The Final Price With GST of %d is %.2f \n", i+1 , final_price);

        }

    return 0;
}