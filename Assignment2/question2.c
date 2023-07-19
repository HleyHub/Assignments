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
	int choice;

	// Assign a value to the "integer" member
	printf("Please enter the type of number (1 for integer or 2 for real): ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("Please enter an integer: ");
		scanf("%d", &num.integer);
		
		// Print the integer member of the union
		printf("Integer: %d\n", num.integer);

		// Manually cast the integer to a float and store it in the real member
		num.real = (float)num.integer;

		// Print the real member of the union
		printf("Real: %.2f\n", num.real);
	}
/*	else if (choice == 2)
	{
		printf("Please enter a real number: ");
        scanf("%f", &num.real);

        // Print the real member of the union
        printf("Real: %.2f\n", num.real);
	}*/
	else
	{
		printf("Invalid choice.\n");
		return (1); // Exit the program
	}
/*	// Print both members of the union
	printf("Integer: %d\n", num.integer);
	printf("Real: %.2f\n", num.real);*/

	return (0);
}
