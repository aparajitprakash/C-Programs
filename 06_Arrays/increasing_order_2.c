// 20-09-26
// Check wheather the array is in increasing order or not 
// Better code than first one 
#include <stdio.h>

int main(){

     int arr[5] = {3, 6, 18, 2, 55}; 

     for (int i=0; i<4; i++){ // i<4 not i<5
         
        if(arr[i]>arr[i+1]){
            printf("No, it is not in Increasing order\n");
            return 0;
        }
     }
        printf("Yes, it is in Increasing order\n");

     return 0;

}