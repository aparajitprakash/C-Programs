// Count string length

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    printf("Enter your name: ");
    fgets(str, 100, stdin);
    
    int n=strlen(str);
    printf("Your name length is %d", n);

    return 0;

}

// Print without using the function strlen 

// int count = 0;
//  for(int i=0; str[i]!='\0'; i++){
//     count++;
//  }

// print("%d", count); 