#include <stdio.h>
#include <string.h>

// Define a structure "Book"
struct Book
{
	char title[100];
	char author[100];
	unsigned int pages;
};

// A function to swap two Book structures
void swap(struct Book *first_book, struct Book *second_book)
{
	struct Book temp_book = *first_book;
	*first_book = *second_book;
	*second_book = temp_book;
}

// A function to sort books based on the number of pages in ascending order
void sort_book(struct Book books[], int n)
{
	int a, b;

	for (a = 0; a < n - 1; a++)
	{
		for (b = 0; b < n - a - 1; b++)
		{
			if (books[b].pages > books[b + 1].pages)
			{
				swap(&books[b], &books[b + 1]);
			}
		}
	}
}

int main()
{
	//Create an array of 10 "Book" structures
	struct Book books[10];
	int s;

	// Prompt the user to input data for each book
	for (s = 0; s < 10; s++)
	{
		printf("Please enter details for each book %d:\n", s + 1);
	
		printf("Title: ");
		scanf("%s", books[s].title);
		
		printf("Author: ");
		scanf("%s", books[s].author);
		
		printf("Number of pages: ");
		scanf("%u", &books[s].pages);
		
		printf("\n");
	}

	// Sort the array of "Book" structures based on the number of pages
	sort_book(books, 10);

	// Print the sorted array of books
	printf("Sorted Books based on the number of pages in ascending order:\n");
	for (s = 0; s < 10; s++)
	{
		printf("Title: %s\n", books[s].title);
		printf("Author: %s\n", books[s].author);
		printf("Number of pages: %u\n", books[s].pages);
		printf("\n");
	}
	return (0);
}
