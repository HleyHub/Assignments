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

	// Initialize the members of the structure "Person"
	strcpy(person.name, "John");
	person.age = 25;
	person.height = 175.5;

	// Print the details of the person
	printf("Name: %s\n", person.name);
	printf("Age: %d\n", person.age);
	printf("Height: %.2f cm\n", person.height);
	return (0);
}
