#include <stdio.h>
#include <string.h>

// Define a structure "Student"
struct Student
{
	char name[50];
	int rollNumber;
	float marks;
};

int main()
{
	// Create an array of 5 "Student" structures
	struct Student students[5];
	int d;

	// Initialize the members of each "Student" structure in the array

	for (d = 0; d < 5; d++)
	{
		printf("Please enter the details each student %d:\n", d + 1);
		printf("Name: ");
		scanf("%s", students[d].name);
		
		printf("Roll Number: ");
		scanf("%d", &students[d].rollNumber);
		
		printf("Marks: ");
		scanf("%f", &students[d].marks);
		
		printf("\n");
	}

	// Print the details of all students in the array
	printf("Student Details:\n");
	for (d = 0; d < 5; d++)
	{
		printf("Name: %s\n", students[d].name);
		printf("Roll Number: %d\n", students[d].rollNumber);
		printf("Marks: %.2f\n", students[d].marks);
		printf("\n");
	}
	return (0);
}
