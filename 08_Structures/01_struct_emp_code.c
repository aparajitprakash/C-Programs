// 27-09-26
/* Create a structure in C to store Employee code,
   Name, Basic salary find out the Gross salary 
   where HRA is 20% and DA is 50% of Basic salary.  */

#include <stdio.h>   
#include <string.h>

struct Employee{

    int emp_code;
    char name[50];
    float basic_salary;

};

int main(){

    struct Employee e1;

    e1.emp_code = 1001;
    strcpy(e1.name, "Ankit");
    e1.basic_salary = 20000;

    float hra = (20.0/100) * e1.basic_salary;
    float da = (50.0/100) * e1.basic_salary;

    float gross_salary = e1.basic_salary + hra + da;

    printf("Employee Code: %d\n", e1.emp_code);
    printf("Employee Name: %s\n", e1.name);
    printf("Basic Salary : %.2f\n", e1.basic_salary);
    printf("Hra          : %.2f\n", hra);
    printf("Da           : %.2f\n", da);
    printf("Gross Salary : %.2f\n", gross_salary);

    return 0;
}