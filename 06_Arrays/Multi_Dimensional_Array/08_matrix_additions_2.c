// 22-09-26
// Matrix Addition without any thrid matrix
// Imp - 15marks
// Optimized Version
#include <stdio.h>

int main(){

    int rows=3, cols=3;
    int matrix_1[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 
    int matrix_2[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
               matrix_1[i][j] = (matrix_1[i][j] + matrix_2[i][j]) ;
            }
        }        

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                printf("%d ", matrix_1[i][j]);
            }
            printf("\n");
        }        
     return 0;

}

