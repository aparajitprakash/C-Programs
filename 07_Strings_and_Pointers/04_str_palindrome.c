// 26-09-26
// Check whether the string is palindrome or not 

#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "madam";
    int size = strlen(str);

    int i=0, j=size-1;
    int flag = 1;

    while(i<=j){

        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    
    if(flag==1){
        printf("Strings are Palindrome\n");
    }else{
        printf("Strings are not Palindrome\n");
    }

    return 0;
}