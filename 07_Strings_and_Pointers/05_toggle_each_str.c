// 26-09-26
// Toggle each String // means Change Capital letter to Same letter and vice versa

#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "AparaJiT PrKasH";
    int size = strlen(str);

    for(int i=0; i<size; i++){

        if(str[i] != ' '){
            
            if( str[i] >= 'a' && str[i] <= 'z' ){

                str[i] = str[i] - 32;
            }else{
                str[i] = str[i] + 32;
            }
        }
    }
    
    printf("%s \n", str);
    
    return 0;
}    