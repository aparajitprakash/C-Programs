// 20-09-26
// Check whether the array is in Decreasing order or not 
// Better code 
#include <stdio.h>

int main(){

     int arr[5] = {55, 45, 18, 1, 5}; 

     for (int i=0; i<4; i++){ // i<4 not i<5
         
        if(arr[i]<arr[i+1]){
            printf("No, it is not in Decreasing order\n");
            return 0;
        }
     }
        printf("Yes, it is in Decreasing order\n");

     return 0;

}