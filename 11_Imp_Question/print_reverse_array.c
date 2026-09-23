// 20-09-26
// Print the array in Reverse 
// 5 marks 
#include <stdio.h>

int main(){

     int arr[5] = {23, 34, 89, 27, 55}; 
    //  int size = sizeof(arr)/sizeof arr[0];

     for(int i=4; i>=0; i--){ // i=4 / i= n-1 / i= size-1
        printf("%d ", arr[i]);
     }

        
     return 0;

}