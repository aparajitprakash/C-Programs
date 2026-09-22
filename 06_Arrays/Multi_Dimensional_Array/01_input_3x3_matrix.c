// 22-09-26
// Input 3x3 matrix from user and print 
// Less Imp but imp for exam
#include <stdio.h>

int main(){
    // Taking inputs for rows and columns
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int mat[rows][cols];
    // Taking input from user // scanf
    printf("Enter the number of matrix\n");
     for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("Element of matrix[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    //  Print the matrix 3x3
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }        
     return 0;

}