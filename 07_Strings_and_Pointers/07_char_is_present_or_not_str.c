// 26-09-26
// Check whether the char is present or not in the string using function

#include <stdio.h>
#include <string.h>

void checkchar(char str[], char ch);

int main(){

    char str[100];
    char ch;
    printf("Enter the string: ");
    fgets(str, 100 , stdin); 
    
    printf("Enter the character: ");
    scanf("%c", &ch);
    
    // char str[] = "aparajit";
    // char ch = 'e';

    checkchar(str, ch);
 
    return 0;
}   

void checkchar(char str[], char ch){

    for(int i=0; str[i] != '\0'; i++){
        
        if( str[i]== ch ){
            printf("Character is present\n");
            return;
        }
    }
    printf("Character is not present\n");
}