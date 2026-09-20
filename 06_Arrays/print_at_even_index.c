// 20-09-26
// Print the value's which are in even index

#include <stdio.h>

int main(){

    int arr[8] = {22, 34, 89, 27, 55, 26, 87, 45}; // 22 89 55 87 
    //             0   1   2   3   4   5   6   7 
    //              Even - 0  2  4  6 

    for(int i=0; i<8; i++){

        if( i%2==0 ){
            printf("%d ", arr[i]);
        }
    }

    return 0;

}