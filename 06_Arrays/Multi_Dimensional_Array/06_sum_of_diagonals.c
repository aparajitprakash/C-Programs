// 22-09-26
// Sum of Diagonals- (1)Primary Diagonal (2)Secondary Diagonal Both
#include <stdio.h>

int main(){

    int rows=3, cols=3, n=3;
    int diag_sum = 0;
    int mat[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}}; 

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(i==j){               // (i==j || i+j==2)
                  diag_sum += mat[i][j];    
                }else if(j==n-1-i){     // (i+j==2)
                  diag_sum += mat[i][j];    
                }
            }
     
        }        
        printf("Sum of diagonals: %d\n", diag_sum);
        
     return 0;

}

