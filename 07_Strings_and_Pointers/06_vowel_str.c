// 26-09-26
// Count Vowels

#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "aparajit";
    int size = strlen(str);
    int count = 0;

    for(int i=0; i<size; i++){ //   We can also use this str[i] != '\0'

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
      printf("Vowels are %d\n", count);

  return 0;
}