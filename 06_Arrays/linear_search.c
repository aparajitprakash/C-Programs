// 21-09-26
// Linear Search
#include <stdio.h>

int main(){

     int arr[] = {23, 34, 89, 27, 55}; 
     int size = sizeof(arr)/sizeof arr[0];

     int n;
     printf("Enter the number you want to find in the array ");
     scanf("%d", &n);

     for(int i=0; i<size; i++){

        if(arr[i]==n){
            printf("Number Found at %d index and the number is %d", i, arr[i]);
            return 0;
        }

     }
      printf("Number not found");
        
     return 0;

}