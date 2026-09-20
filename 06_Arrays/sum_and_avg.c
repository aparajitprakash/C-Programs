// 20-09-26
#include <stdio.h>

    int main(){

        int n;
        float sum=0;
        printf("Enter the size of the number ");//5
        scanf("%d", &n);

        int i;
        int arr[n];
        printf("Enter the Numbers ");//10 20 30 40 50 
          for( i=0; i<n; i++){
           scanf("%d", &arr[i]);
        }
         for(int i=0; i<n; i++){
            sum += arr[i];
        }

          float avg = sum/n;// 150/5
        printf("Sum of arr elements %.2f\n", sum );
        printf("Avg of arr elements %.2f\n", avg );
        

    return 0;

}
