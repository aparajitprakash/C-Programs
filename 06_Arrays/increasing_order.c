// 20-09-26
// Check wheather the array is in increasing order or not 
// I have done this code totaly using my own logic 
// If you want to see better code see- increasing order 2

#include <stdio.h>

int main(){

     int max = 0;
     int count = 1;
     int arr[5] = {3, 6, 18, 25, 55}; 

     for (int i=0; i<5; i++){

        if(arr[i]>=max){
            max = arr[i];
        }else if (arr[i]<max){
            count--;
            break;
        }
     }
     if(count==0){
        printf("No it is not in a Increasing order");
     }else{
        printf(" Yes it is in a Increasing order");
     }
        
     return 0;

}