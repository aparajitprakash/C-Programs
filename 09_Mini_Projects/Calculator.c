#include <stdio.h>

int main () {
  int a ,b, select, o ;

  printf("Give the first number: ");
  scanf("%d", &a );
 
  printf("Give the second number: ");
  scanf("%d", &b );

  do{
  printf("\nADD- 1 ");
  printf("\nSUBTRACT- 2 ");
  printf("\nMULTIPLY- 3  ");
  printf("\nDIVIDE- 4  ");

  printf("\nYou have 4 optins select any one (1-4): ");
  scanf( "%d", &select);
  
  switch (select){
      case 1 : printf(" %d + %d = %d " , a,b, a+b );
      break;

      case 2 : printf(" %d - %d = %d " , a,b, a-b );
      break;

      case 3 : printf(" %d x %d = %d " , a,b, a*b );
      break;

      case 4 : 
               if (b != 0 ){
                   printf( "%d / %d = %.2f ",a ,b, (float)a/b );
                   }
                else {
                   printf("Number cannot be divided by zero ");
               }
      break;

      default : printf("Not vaild input ");
                printf(" \nPlease select between (1-4) ");
      break;          

     }
    
  } while ( select>=1 && select<=4 );
   
  return 0;           
}

