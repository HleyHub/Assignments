#include <stdio.h>
#include <math.h>

// Create the struct for the circle
struct Circle
{
	unsigned int radius : 4;
};

// Create the struct for the rectangle
struct Rectangle
{
	unsigned int length : 3;
	unsigned int width : 3;
};

// Create a union "Shape" with members "circle" and "rectangle"
union Shape
{
	struct Circle circle;
	struct Rectangle rectangle;
};

// A function to calculate the area of a circle
float area_circle(unsigned int radius)
{
	return (M_PI * radius * radius);
}

// A function to calculate the area of a rectangle
unsigned int area_rectangle(unsigned int length, unsigned int width) 
{
	return (length * width);
}

int main()
{
	union Shape shape;
	int choice;
	unsigned int radius, length, width;
	float area_c;
	unsigned int area_r;

	printf("Please enter a digit: 1 for circle or 2 for rectangle: ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("Please enter the radius of the circle: ");
		scanf("%u", &radius);

		shape.circle.radius = radius;
		area_c = area_circle(shape.circle.radius);
		printf("The area of the circle is: %.2f\n", area_c);
	}
	else if (choice == 2)
	{
		printf("Please enter the length of the rectangle: ");
		scanf("%u", &length);
	
		printf("please enter the width of the rectangle: ");
		scanf("%u", &width);

		shape.rectangle.length = length;
		shape.rectangle.width = width;
		area_r = area_rectangle(shape.rectangle.length, shape.rectangle.width);
		printf("The area of the rectangle is: %u\n", area_r);
	}
	else
	{
		printf("This choice is invalid!\n");
	}
	return (0);
}
