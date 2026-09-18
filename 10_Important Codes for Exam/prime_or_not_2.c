#include <stdio.h>

    int main(){

        int n, i ,count=0;
        printf("Enter the number: ");
        scanf("%d", &n);

        if(n==1){
            printf("Not a Prime Number");
            count++;
        }
     
        for(i=2; i<n; i++){

            if(n%i == 0){
                printf("%d is Not a Prime Number",n);
                count++;
                break;
               
            } 
        }
            if (count==0){
            printf("Prime Number");
            }
        

    return 0;

}
