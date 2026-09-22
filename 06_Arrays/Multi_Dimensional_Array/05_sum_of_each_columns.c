// 22-09-26
// Sum of each colums
#include <stdio.h>

int main(){

    int rows=3, cols=3;
    int cols_sum = 0;
    int matrix_sum=0;
    int mat[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 

        for(int j=0; j<cols; j++){
            // Columns Fixed
            cols_sum=0;
            for(int i=0; i<rows; i++){
                // Rows Changed
                cols_sum += mat[i][j];    
            }
            matrix_sum += cols_sum;
            printf("Sum of each elements of columns[%d]: %d\n", j, cols_sum);
        }        

        printf("Sum of all the elements of matrix: %d", matrix_sum);
     return 0;

}

