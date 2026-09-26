// 26-09-26
// Check whether the string are equal or not 

#include <stdio.h>
#include <string.h>

int main(){

    char str1[100];
    char str2[100];

    printf("Enter string_1: ");
    fgets(str1, 100, stdin);

    printf("Enter string_2: ");
    fgets(str2, 100, stdin);

    if(strcmp(str1, str2) == 0){
        printf("Strings are Equal\n");
    }else{
        printf("Strings are not Equal\n");
    }

    return 0;
}
