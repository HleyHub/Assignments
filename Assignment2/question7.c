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
	unsigned int rgb;

	// Prompt the user to enter the RGB color value as an integer
	printf("Please enter the RGB color value: ");
	scanf("%u", &rgb);

	// Extract the individual color components using bitwise operations
	color.red = (rgb >> 16) & 0xFF;
	color.green = (rgb >> 8) & 0xFF;
	color.blue = rgb & 0xFF;

	// Print the RGB values
	printf("Red: %u\n", color.red);
	printf("Green: %u\n", color.green);
	printf("Blue: %u\n", color.blue);
	return (0);
}
