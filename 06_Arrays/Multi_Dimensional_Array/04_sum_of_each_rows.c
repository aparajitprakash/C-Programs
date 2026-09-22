// 22-09-26
// Sum of each rows
#include <stdio.h>

int main(){

    int rows=3, cols=3;
    int row_sum = 0;
    int matrix_sum=0;
    int mat[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 

        for(int i=0; i<rows; i++){
            row_sum=0;
            for(int j=0; j<cols; j++){
                row_sum += mat[i][j];    
            }
            matrix_sum += row_sum;
            printf("Sum of each elements of row[%d]: %d\n", i, row_sum);
        }        

        printf("Sum of all the elements of matrix: %d", matrix_sum);
     return 0;

}
