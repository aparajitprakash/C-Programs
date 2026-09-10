#include <stdio.h>

int alphabet(char i);

int alphabet(char i){
     for(i='A'; i<='Z' ;i++){
       
        printf("\n %c" , i);

    }
}
int main(){

    char i;
    printf("====Alphabets====");

    alphabet(i);

   return 0;
}