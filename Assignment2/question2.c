#include <stdio.h>

// Define the union "Number" with members "integer" and "real"
union Number
{
	int integer;
	float real;
};

int main()
{
	// Create a variable of the union type
	union Number num;

	// Assign a value to the "integer" member
	num.integer = 42;

	// Print both members of the union
	printf("Integer: %d\n", num.integer);
	printf("Real: %.2f\n", num.real);

	return (0);
}
