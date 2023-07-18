#include <stdio.h>

// Create a union "DataValue" with members "integer" and "floatingPoint"
union DataValue
{
	int integer;
	float floatingPoint;
};

int main()
{
	union DataValue data;
	char input[100];

	printf("Please enter a number: ");
	fgets(input, sizeof(input), stdin);

    // Check whether the input is an integer or a floating-point number
    if (sscanf(input, "%d", &data.integer) == 1)
    {
	    // If the input is an integer, print it as an integer
	    printf("This is an integer: %d\n", data.integer);
    }
    else if (sscanf(input, "%f", &data.floatingPoint) == 1)
    {
	    // If the input is a floating-point number, print it as a float
	    printf("This is a floating-point: %.2f\n", data.floatingPoint);
    }
    else
    {
	    printf("Invalid input: this is not a valid integer or floating-point number!\n");
    }
    return (0);
}
