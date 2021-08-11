#include <stdio.h>
#include <string.h>
struct Employee
{
   int Employee_ID;
   int age;
   char Name[50];
   char Department[20];
   float Salary;	
};
int main()
{
	struct Employee emp1 = {101,25,"Dave","IT",25000.50};
	struct Employee emp2;
	 emp2.Employee_ID = 102;
	 emp2.age = 28;
	 strcpy(emp2.Name,"Christopher");
	 strcpy(emp2.Department,"science");
	 emp2.Salary = 32000.70;
	 
	 printf("Details of the Employee \n");
	 printf("Employee Id = %d\n",emp1.Employee_ID);
	 printf("Employee Age = %d\n",emp1.age);
	 printf("Employee Name = %s\n",emp1.Name);
	 printf("Employee Department = %s\n",emp1.Department);
	 printf("Employee salary = %.2f\n\n",emp1.Salary);

	 printf("Details of the Employee \n");
	 printf("Employee Id = %d\n",emp2.Employee_ID);
	 printf("Employee Age = %d\n",emp2.age);
	 printf("Employee Name = %s\n",emp2.Name);
	 printf("Employee Department = %s\n",emp2.Department);
	 printf("Employee salary = %.2f\n\n",emp2.Salary);	 
	 return 0;

}