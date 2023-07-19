#include <stdio.h>
#include <string.h>

// Define a structure "Person"
struct Person
{
	char name[50];
	int age;
	float height;
};

int main()
{
	// Create a variable of type "Person"
	struct Person person;

	// Prompt the user to enter the person's details
	printf("Please enter the name: ");
	scanf("%s", person.name);

	printf("Please enter the age: ");
	scanf("%d", &person.age);

	printf("Please enter the height (in cm): ");
	scanf("%f", &person.height);

	// Print the details of the person
	printf("Name: %s\n", person.name);
	printf("Age: %d\n", person.age);
	printf("Height: %.2f cm\n", person.height);
	return (0);
}
