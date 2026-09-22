// 22-09-26
// Sum of all the elements of matrix
#include <stdio.h>

int main(){

    int rows=3, cols=3;
    int sum = 0;
    int mat[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                sum += mat[i][j];
            }
        }        

        printf("Sum of all the elements of matrix: %d", sum);
     return 0;

}
