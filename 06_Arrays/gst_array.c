#include <stdio.h>

int main()
{
    int cost=0, j;
    float final_cost;
    int price[3];

    printf("Enter the 1st price: ");
    scanf("%d", &price[0]);

    printf("Enter the 2nd price: ");
    scanf("%d", &price[1]);

    printf("Enter the 3rd price: ");
    scanf("%d", &price[2]);


        for(j=0; j<3; j++)
        {
            // cost=0;
            // final_cost=0;

            cost= price[j]*18/100;
            final_cost= price[j]+cost;

            printf(" Final cost of %d with GST:%.2f\n", j+1 ,final_cost);
        }

    
}