//structure 
#include<stdio.h>
#include<string.h>
struct Employee{
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}employee1;
int main(){
    strcpy(employee1.name,"John Doe");
    employee1.id=1234;
    strcpy(employee1.department,"Human Resource");
    employee1.salary=5500.50;
    strcpy(employee1.email,"john.doe@company.com");

    printf("Name %s",employee1.name);
    printf("ID %d",employee1.id);
    printf("Department %s",employee1.department);
    printf("Salary %f",employee1.salary);
    printf("Email %s",employee1.email);


   



return 0;
}