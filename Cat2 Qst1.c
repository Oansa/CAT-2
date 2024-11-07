/*
AUTHOR: KAMANDE MUIRURI
REG NO: CT101/G/23908/24
7-11-2024
Employee struct
*/

#include <stdio.h> 

	struct employee {
		char name[25];
		int id;
		char department[20];
		float salary;
		char email[50];
		
	}empl; 
	
	int main() {
	struct employee empl={
		"John Doe", 
		12345,
		"Human resources",
		55000.50,
		"john.doe@company.com"
	};
	
//Outputs
printf("\nEmployee name is: %s \n", empl.name);
printf("Emloyee id is: %i \n", empl.id);
printf("Department is: %s \n", empl.department);
printf("Salary is: %f \n", empl.salary);
printf("Email is is: %s \n", empl.email);
	
	
	return 0;
}
