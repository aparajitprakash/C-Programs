// 20-09-26
#include <stdio.h>

    int main(){

        int n;
        printf("Enter the size of the number ");
        scanf("%d", &n);

        int i;
        int arr[n];
        printf("Enter the Numbers ");
          for( i=0; i<n; i++){
           scanf("%d", &arr[i]);
        }
          float sum=0;
         for(int i=0; i<n; i++){
            sum += arr[i];
        }

          float avg = sum/n;
        printf("Sum of arr elements %.2f\n", sum );
        printf("Avg of arr elements %.2f\n", avg );
        

    return 0;

}
