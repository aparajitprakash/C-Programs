// 22-09-26
// Print 3x3 matrix without taking input from user.
#include <stdio.h>

int main(){

    int rows=3, cols=3;
    int mat[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){

                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }        
     return 0;

}