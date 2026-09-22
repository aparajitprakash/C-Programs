// 22-09-26
// Matrix Multiplication
// Imp - 15marks
// Exam Version
#include <stdio.h>

int main(){

    int rows=3, cols=3;
    int sum = 0;
    int matrix_1[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 
    int matrix_2[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 
    int multiply_matrix[3][3];

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){

              sum=0;
                for(int k=0; k<cols; k++){
                    sum += matrix_1[i][k] * matrix_2[k][j];
                    multiply_matrix[i][j]= sum;
                }
            }
        }        

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                printf("%d ", multiply_matrix[i][j]);
            }
            printf("\n");
        }        
     return 0;

}

