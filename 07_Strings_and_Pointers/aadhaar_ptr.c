#include <stdio.h>

int main()
{

    int aadhaar[10];
    int *ptr = &aadhaar[0];

    for (int i = 0; i < 10; i++){
        printf("Enter the aadhaar of %d: ", i + 1);
        scanf("%d", &aadhaar[i]);
    }
    
        for (int i = 0; i < 10; i++){
            printf("Aadhaar : %d\n ", *ptr++);
        }
}