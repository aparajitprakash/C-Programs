// 27-09-26
// Reverse an Array (Exam Version) - Best version
// 5 marks

#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int start = 0;
    int end = n-1; // size-1 ; 5-1

    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

