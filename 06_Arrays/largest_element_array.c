// Important for Exam 
// Lastet code is in Imp Question - Largest Element with index in an array
#include <stdio.h>

// array mai hamesha call by reference hota hai.
// call by reference 
int return_max(int array[], int n);

int return_max(int array[], int n)
{
    int max=0;
    for(int i=0; i<n ; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}

int main (){

    int arr[5]={24,9,104,78,101};

    int max= return_max(arr, 5);
    printf("\nLargest number in the element is: %d\n", max);

    return 0;

}
