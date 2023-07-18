#include <stdio.h>

// Create a union "Color" with members "red", "green", and "blue"
union Color
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
};

int main()
{
	union Color color;

	// Set the RGB values
	color.red = 255;
	color.green = 128;
	color.blue = 64;

	// Print the RGB values
	printf("Red: %u\n", color.red);
	printf("Green: %u\n", color.green);
	printf("Blue: %u\n", color.blue);
	return (0);
}
