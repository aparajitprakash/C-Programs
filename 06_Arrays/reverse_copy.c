// 23-09-26
// Make Reverse Copy
#include <stdio.h>

int main(){

     int arr[5] = {23, 34, 89, 27, 55}; 
     int size = sizeof(arr)/sizeof arr[0];
     int brr[size];

        
        for(int i=0; i<size; i++){
         brr[i] = arr[size-1-i];  // 4-i
        }
        

        for(int i=0; i<5; i++){
            printf("%d ", brr[i]);
        }

     return 0;

}