// 21-09-26
// Left Rotate by 1 
#include <stdio.h>

int main(){

     int arr[5] = {23, 34, 89, 27, 55}; // 34 89 27 55 55 23 
     int size = sizeof(arr)/sizeof arr[0];

        int temp = arr[0];

        for(int i=1; i<size; i++){
            arr[i-1]=arr[i];
        }

        arr[size-1]=temp;
        for(int i=0; i<size; i++){
           printf("%d ", arr[i]);
        }
        
     return 0;

}