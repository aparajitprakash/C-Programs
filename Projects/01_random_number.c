#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int random_number = rand() % 100+1;
    // printf("%d\n",random_number);

    int guess_number;
    int count=0;
    int n;
    printf("Guess the  number between 1-100\n");

    printf("How much attempts you want to take to guess the number: ");
    scanf("%d", &n);
    int i = n;

    do{

        printf("\nEnter the Number: ");
        scanf ("%d", &guess_number);
    
        if (guess_number < random_number){
            printf(" Higher !! ");
        }
        else if (guess_number > random_number){
                printf(" Lower !! ");
        }
         n--;
        if (guess_number != random_number){
            printf("\nYou Have %d attempts left\n",n);
        }

        if ( guess_number == random_number ){
            printf("Congratulation You Guessed It Right");
         }

        count++;

    } while( guess_number != random_number &&  n != 0 ); 

    if (n==0){
        printf("\n----- STOP -----");
        printf("\nYour %d attempts is over ",i );
        printf("\nThe number was %d\n",random_number);
        printf("\n---BETTER LUCK NEXT TIME----");
        printf("\n--Thank You--");

    }

    if (guess_number == random_number){

        printf("\nYou guessed it at %d times", count);
    }


    return 0;
}