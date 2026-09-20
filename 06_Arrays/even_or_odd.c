// 20-09-26
// Even or Odd count 

#include <stdio.h>

int main(){

    int arr[8] = {22, 34, 89, 27, 55, 26, 87, 45};
    
    int even_count=0;
    int odd_count=0;

    for(int i=0; i<8; i++){

        if( arr[i]%2==0 ){
            even_count++;
        }else {
            odd_count++;
        }
    }

    printf("Even: %d\n", even_count);
    printf("Odd : %d\n", odd_count);

    return 0;

}