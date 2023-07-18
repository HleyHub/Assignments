#include <stdio.h>
#include <string.h>

// Define a structure "Employee"
struct Employee
{
	char name[100];
	int id;
	float salary;
};

int main()
{
	struct Employee employees[3];
	int i;
	int highest_Salary_Index = 0;

	// Read information for three employees
	for (i = 0; i < 3; i++)
	{
		printf("Please enter the Employee's name %d: ", i + 1);
		scanf("%s", employees[i].name);

		printf("Please enter the Employee's ID %d: ", i + 1);
		scanf("%d", &employees[i].id);

		printf("Please enter the Employee's salary %d: ", i + 1);
		scanf("%f", &employees[i].salary);

		printf("\n");
    }

	// Find the employee with the highest salar
	for (i = 1; i < 3; i++)
	{
		if (employees[i].salary > employees[highest_Salary_Index].salary)
		{
			highest_Salary_Index = i;
		}
	}

	// Print the employee's details with the highest salary
	printf("Employee with the highest salary:\n");
	printf("Name: %s\n", employees[highest_Salary_Index].name);
	printf("ID: %d\n", employees[highest_Salary_Index].id);
	printf("Salary: %.2f\n", employees[highest_Salary_Index].salary);
	return (0);
}
