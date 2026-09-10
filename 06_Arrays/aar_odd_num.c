#include <stdio.h>

int main()
{
    int arr[7] = {22,24,35,45,26,43,67};
    int *ptr = &arr[0];
    int oddcount=0;

    for (int i = 0; i < 7; i++){
        
        if (arr[i]%2!=0) 
        {
           printf("%d is a odd array \n", arr[i]);
           oddcount++;
        }
        else{
            printf("%d is a even array \n", arr[i]);
        }

    }

    printf("%d times array is odd", oddcount );
    return 0; 
}
