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
	strcpy(students[0].name, "John");
	students[0].rollNumber = 101;
	students[0].marks = 85.5;

	strcpy(students[1].name, "Emily");
	students[1].rollNumber = 102;
	students[1].marks = 78.0;

	strcpy(students[2].name, "Michael");
	students[2].rollNumber = 103;
	students[2].marks = 92.3;

	strcpy(students[3].name, "Sarah");
	students[3].rollNumber = 104;
	students[3].marks = 76.8;

	strcpy(students[4].name, "David");
	students[4].rollNumber = 105;
	students[4].marks = 89.1;

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
