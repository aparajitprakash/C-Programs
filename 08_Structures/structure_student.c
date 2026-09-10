#include <stdio.h>
#include <string.h>

struct student{
        char name[100];
        int roll;
        float cgpa;
    };

    int main (){
        struct student s1;
            s1.roll=1001;
            s1.cgpa=9.7;
            s1.name;
        struct student s2;
            s2.roll=1002;
            s2.cgpa=9.5;
            s2.name;
        struct student s3;
            s3.roll=1003;
            s3.cgpa=9.3;
            s3.name;
        
         printf("Enter the name of First student: \n");
         scanf("%s", s1.name);
         printf("Enter the name of Second student: \n");
         scanf("%s", s2.name);
         printf("Enter the name of Thrid student: \n");
         scanf("%s", s3.name);

        printf("First student:  %d\t%.2f\t%s \n",s1.roll, s1.cgpa, s1.name);
        printf("Second student: %d\t%.2f\t%s \n",s2.roll, s2.cgpa, s2.name);
        printf("Thrid student:  %d\t%.2f\t%s \n",s3.roll, s3.cgpa, s3.name);

    }
