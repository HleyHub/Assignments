#include <stdio.h>

// Define the struct for the bitfields
struct BitFields
{
	unsigned int bit1 : 1;
	unsigned int bit2 : 2;
	unsigned int bit3 : 3;
};

// Create a union "Data" with members "value" (int) and "binary" (struct)
union Data
{
	int value;
	struct BitFields binary;
};

int main()
{
	union Data data;
	int input;

	// Prompt the user to enter an integer value
	printf("please enter an integer value: ");
	scanf("%d", &input);

	// Assign values to the bitfields using bitwise operations
	data.binary.bit1 = (input >> 0) & 1;
	data.binary.bit2 = (input >> 1) & 3;
	data.binary.bit3 = (input >> 3) & 7;

	// Print the union members
	printf("Value: %d\n", data.value);
	printf("Bit 1: %u\n", data.binary.bit1);
	printf("Bit 2: %u\n", data.binary.bit2);
	printf("Bit 3: %u\n", data.binary.bit3);
	return (0);
}
