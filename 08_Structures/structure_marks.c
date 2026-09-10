// // Write program in C using structure to store 10 student's records
// (student's name, Roll, Marks of 3 subjects) and
//  find out the total marks of each students.

#include <stdio.h>
#include <string.h>

typedef struct exam{

    char name[100];
    int roll;
    float marks1;
    float marks2;
    float marks3;

}exm;

int student_records(struct exam student);

int student_records(struct exam student){
    
     float c=(student.marks1+student.marks2+student.marks3);
    

        printf("Student Name= %s \nRoll= %d \nMarks1= %.2f \nMarks2= %.2f \nMarks3= %.2f\n",
                student.name, student.roll, student.marks1, student.marks2, student.marks3);

                printf("\n");
                printf("The Total marks is %.0f out of 300", c );

                printf("\n");
}

int main(){

    int std;
     exm student[10];

        printf("Enter the roll and marks of Aparajit\n");
        scanf("%d" , &student[0].roll);
        scanf("%f" , &student[0].marks1);
        scanf("%f" , &student[0].marks2);
        scanf("%f" , &student[0].marks3);

        // strcpy(student[0].name,"Aparajit");
        // student[0].roll= 102;
        // student[0].marks1= 90;
        // student[0].marks2= 75;
        // student[0].marks3= 89;

        // struct exam student[0] = {"Aparajit",101,95,93,98};

        strcpy(student[1].name,"Aman");
        student[1].roll= 102;
        student[1].marks1= 90;
        student[1].marks2= 75;
        student[1].marks3= 89;

        strcpy(student[2].name,"Ankit");
        student[2].roll= 103;
        student[2].marks1= 78;
        student[2].marks2= 86;
        student[2].marks3= 78;

        strcpy(student[3].name,"Avinash");
        student[3].roll= 104;
        student[3].marks1= 93;
        student[3].marks2= 80;
        student[3].marks3= 86;

        strcpy(student[4].name,"Krish");
        student[4].roll= 105;
        student[4].marks1= 95;
        student[4].marks2= 89;
        student[4].marks3= 90;

        strcpy(student[5].name,"Farid");
        student[5].roll= 106;
        student[5].marks1= 90;
        student[5].marks2= 85;
        student[5].marks3= 78;
        
        strcpy(student[6].name,"Amit");
        student[6].roll= 107;
        student[6].marks1= 86;
        student[6].marks2= 83;
        student[6].marks3= 82;

        strcpy(student[7].name,"Nitesh");
        student[7].roll= 108;
        student[7].marks1= 73;
        student[7].marks2= 72;
        student[7].marks3= 85;

        strcpy(student[8].name,"Ritesh");
        student[8].roll= 109;
        student[8].marks1= 89;
        student[8].marks2= 80;
        student[8].marks3= 72;

        strcpy(student[9].name,"Harsh");
        student[9].roll= 110;
        student[9].marks1= 95;
        student[9].marks2= 90;
        student[9].marks3= 75;

        do{
            printf("\n");
        printf("Select whose marks you want to see \n");
        printf("\n");
        printf("Student[1]-> Aparajit\n");
        printf("Student[2]-> Aman\n");
        printf("Student[3]-> Ankit\n");
        printf("Student[4]-> Avinash\n");
        printf("Student[5]-> Krish\n");
        printf("Student[6]-> Farid\n");
        printf("Student[7]-> Amit\n");
        printf("Student[8]-> Nitesh\n");
        printf("Student[9]-> Ritesh\n");
        printf("Student[10]-> Harsh\n");
        printf("\n");
        scanf("%d", &std );
        printf("\n");

        

            switch (std){

                case 1: student_records(student[0]);
                break;
                
                case 2: student_records(student[1]);
                break;

                case 3: student_records(student[2]);
                break;

                case 4: student_records(student[3]);
                break;

                case 5: student_records(student[4]);
                break;

                case 6: student_records(student[5]);
                break;

                case 7: student_records(student[6]);
                break;

                case 8: student_records(student[7]);
                break;

                case 9: student_records(student[8]);
                break;

                case 10: student_records(student[9]);
                break;

            }

        }while(std>=1 && std<=10);
 return 0;
    }
