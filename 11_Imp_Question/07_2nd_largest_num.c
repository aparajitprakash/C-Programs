// 20-09-26
// Very Important for Exam- 2nd Largest element in an array  

#include <stdio.h>

int main(){
    // int n;
    // printf("Enter the number of element: ");// Taking the input of n // n=5
    // scanf("%d", &n);

    int arr[5] = {23, 34, 89, 27, 55}; 
    // int arr[n];
    //   printf("Enter the element's of array: ");//Taking inputs from user
    //     for(int i=0; i<n; i++){
    //         scanf("%d", &arr[i]);
    //        }   

     int max;
     int sec_max;

     max = arr[0]>arr[1] ?  arr[0] : arr[1];
     sec_max = arr[0]>arr[1] ?  arr[1] : arr[0];

        for(int i=2; i<5; i++){
                if(arr[i]>=max){
                    sec_max = max;
                    max = arr[i];
                }
                else if(arr[i]>sec_max){
                    sec_max = arr[i];
                }
            }     

        printf("Max element is %d\n", max);
        printf("2nd Max element is %d ", sec_max);

        return 0;

}