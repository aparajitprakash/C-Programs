// 02-10-26
#include <stdio.h>

int main(){

    printf("------Welcome-------\n");
    printf("Welcome to Menu Driven program of array in C language\n");

    int choose_arr;
    char choose_program1;
    char choose_program2;

    do{
        
        printf("\n-----Menu-----\n");
        printf("1 - Single Dimensional Array\n");
        printf("2 - Multi Dimensional Array\n");
        printf("3 - Exit Program\n");
        printf("Choose any one of them (1-2-3): \n");
        scanf("%d", &choose_arr);

        switch(choose_arr){

            case 1:

            do{
    
                    printf("\n---Single Dimensional Array---\n");
                    printf("\n");
                    printf("A - Sum of Array Elements\n");
                    printf("B - Reverse of Array Elements\n");
                    printf("C - Addition of two Arrays\n");
                    printf("D - Exit Program\n");
                    printf("Choose any one of them (A-B-C-D): \n");
                    scanf(" %c", &choose_program1);


                    switch(choose_program1){

                        case 'A': {
                            
                            // Sum of Array Elements
                            printf("\nSum of Array Elements\n");

                            int n;
                            printf("Enter the number of array elements are there: \n");
                            scanf("%d", &n);
                            int arr[n];

                            printf("Enter the array elements: \n");
                            for(int i=0; i<n; i++){
                                scanf("%d", &arr[i]);
                            }
                            
                            int sum = 0;

                                for(int i=0; i<n; i++){
                                    sum += arr[i];
                                }

                                printf("Sum of Array Elements is- %d\n", sum);

                            break;
                        }

                        case 'B': {

                            // Reverse of Array Elements
                            printf("\nReverse of Array Elements\n ");

                            int n;
                            printf("Enter the number of array elements are there: \n");
                            scanf("%d", &n);
                            int arr[n];

                            printf("Enter the array elements: \n");
                            for(int i=0; i<n; i++){
                                scanf("%d", &arr[i]);
                            }
                            
                            int start = 0;
                            int end = n-1;
                    
                                while(start<end){
                                    int temp = arr[start];
                                    arr[start] = arr[end];
                                    arr[end] = temp;

                                    start++;
                                    end--;
                                }

                                printf("\n");
                                printf("Reverse of Array Element\n");
                                    for(int i=0; i<n; i++){
                                        printf("%d ", arr[i]);
                                    }
                            
                            break;

                        }

                        case 'C':{

                            // Addition of two Arrays
                            printf("\nAddition of two Arrays\n");

                            int n;
                            printf("Enter the number of array elements are there: \n");
                            scanf("%d", &n);

                            int arr[n];
                            int brr[n];
                            int crr[n];

                            printf("Enter the first array elements: \n");
                            for(int i=0; i<n; i++){
                                scanf("%d", &arr[i]);
                            }
                            
                            printf("Enter the second array elements: \n");
                                for(int i=0; i<n; i++){
                                    scanf("%d", &brr[i]);
                                }


                                for(int i=0; i<n; i++){
                                    crr[i] = arr[i] + brr[i];
                                }

                                printf("\n");
                                printf("Addition of two array\n");
                                for(int i=0; i<n; i++){
                                    printf("%d ", crr[i]);

                                }

                            break;

                        }

                        case 'D': 
                        
                            // Exit Program
                            printf("Exited Successfully\n");
                            break;

                        default: printf("Invalid Input\n");
                                 printf("Try Again\n");

                    }
                }while(choose_program1!='D');
                break;

            case 2:
                
            do{

                    printf("\n---Multi Dimensional Array---\n");
                    printf("\n");
                    printf("A - Transpose of Matrix\n");
                    printf("B - Addition of two Matrix\n");
                    printf("C - Multiplication of two Matrix\n");
                    printf("D - Exit Program\n");
                    printf("Choose any one of them (A-B-C-D): \n");
                    scanf(" %c", &choose_program2);


                    switch(choose_program2){

                        case 'A': {
                            
                            // Transpose of Matrix
                            printf("\nTranspose of Matrix\n");

                            int rows;
                            int cols;
                            printf("Enter the number of rows and coloumns: \n");
                            scanf("%d %d", &rows, &cols);

                            int arr[rows][cols];
                            int trr[cols][rows];

                            printf("Enter the array elements: \n");
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){

                                   scanf("%d", &arr[i][j]);
                                }
                            }
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){
                                
                                trr[j][i] = arr[i][j];
                                }
                            }

                            printf("\n");
                            printf("Transpose of Matrix\n");
                            for(int i=0; i<cols; i++){
                                for(int j=0; j<rows; j++){
                            
                                printf("%d ",trr[i][j]); 
                               }
                               printf("\n");
                            }
                            break;
                        }

                        case 'B': {

                            // Addition of two Matrix
                            printf("\nAddition of two Matrix\n");

                            int rows;
                            int cols;
                            printf("Enter the number of rows and coloumns: \n");
                            scanf("%d %d", &rows, &cols);

                            int arr[rows][cols];
                            int brr[rows][cols];
                            int crr[rows][cols];

                            printf("Enter the first array elements: \n");
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){

                                   scanf("%d", &arr[i][j]);
                                }
                            }

                            printf("Enter the second array elements: \n");
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){

                                   scanf("%d", &brr[i][j]);
                                }
                            }

                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){
                                
                                 crr[i][j] = arr[i][j] + brr[i][j];
                                }
                            }

                            printf("\n");
                            printf("Addition of two Matrix\n");
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){
                            
                                printf("%d ", crr[i][j]); 
                               }
                               printf("\n");
                            }

                            break;

                        }

                        case 'C':{

                            // Multiplication of two Matrix
                            printf("\nMultiplication of two Matrix\n");

                            int rows;
                            int cols;
                            printf("Enter the number of rows and coloumns: \n");
                            scanf("%d %d", &rows, &cols);

                            int arr[rows][cols];
                            int brr[rows][cols];
                            int crr[rows][cols];

                            printf("Enter the first array elements: \n");
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){

                                   scanf("%d", &arr[i][j]);
                                }
                            }

                            printf("Enter the second array elements: \n");
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){

                                   scanf("%d", &brr[i][j]);
                                }
                            }
                            int sum = 0;
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){
                                sum = 0;
                                 for(int k=0; k<rows; k++){
                                    sum += arr[i][k] * brr[k][j];
                                }
                                crr[i][j] = sum; 
                                }
                            }

                            printf("\n");
                            printf("Multiplication of two Matrix\n");
                            for(int i=0; i<rows; i++){
                                for(int j=0; j<cols; j++){
                            
                                printf("%d ",crr[i][j]); 
                               }
                               printf("\n");
                            }

                            break;
                        }

                        case 'D': 
                        
                            // Exit Program
                            printf("Exited Successfully\n");
                            break;

                        default: printf("Invalid Input\n");
                                 printf("Try Again\n");

                    }
                }while(choose_program2!='D');
                break;

            case 3:
                // Exit Program
                printf("Program Exited Successfully\n");
                printf("Thank You\n");
                break;

            default: printf("Invalid Input\n");
                        printf("Try Again\n");
        }
    
    }while(choose_arr!=3);

 return 0;
}    
