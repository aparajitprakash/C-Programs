// 16/08/26
#include <stdio.h>

int main(){

    int n, i;
    printf("Enter the last nutural number you want to be added: ");
    scanf("%d", &n);
    

    int sum=0;

    for(i=1; i<=n; i++){

        printf("%d\t",i);
        // sum=sum+i;
        sum+=i;
    }
        printf("\nSum of First %d Nutural number is %d", n ,sum); 
        return 0; 
}










