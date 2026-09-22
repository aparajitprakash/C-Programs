// 22-09-26
// Transpose of Matrix // means columns(j) ki jagah rows(i) mai
// Matrix[rows][columns] -> Transpose[columns][rows] 
#include <stdio.h>

int main(){

    int rows=3, cols=3;
    int mat[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 
    int transprose[3][3];

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                transprose[i][j] = mat[j][i];
            }
        }        

        printf("Transpose Matrix: \n");
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                printf("%d ", transprose[i][j]);
            }
            printf("\n");
        }   
             
     return 0;

}

