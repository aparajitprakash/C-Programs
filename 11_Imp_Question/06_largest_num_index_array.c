// 20-09-26
// Very Important for Exam- Largest element in an array with the index 

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of element: ");// Taking the input of n // n=5
    scanf("%d", &n);

    // int arr[5] = {23, 34, 89, 27, 55,}; 
    int arr[n];
      printf("Enter the element's of array: ");//Taking inputs from user
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }


    int max = arr[0];
    int index = 0;
        for(int i=0; i<n; i++){

            if(arr[i]>=max){

                max=arr[i];
                index = i;
            }

        }     

        printf("Max Element found %d at index of %d ", max, index);

        return 0;

}