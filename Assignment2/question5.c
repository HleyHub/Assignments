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
void swap(struct Book *first_book, struct Book *second_book2)
{
	struct Book temp = *first_book;
	*first_book = *second_book;
	*second_book = temp_book;
}

// A function to sort books based on the number of pages in ascending order
void bubbleSort(struct Book books[], int n)
{
	int a, b;

	for (a = 0; a < n - 1; a++)
	{
		for (b = 0; b < n - a - 1; b++)
		{
			if (books[j].pages > books[j + 1].pages)
			{
				swap(&books[b], &books[b + 1]);
			}
		}
	}
}

int main()
{
	struct Book books[10];
	int s;

	// Initializingthe array of "Book" structures
	strcpy(books[0].title, "Book 1");
	strcpy(books[0].author, "Author 1");
	books[0].pages = 300;

	// Add details for the remaining books

	strcpy(books[9].title, "Book 10");
	strcpy(books[9].author, "Author 10");
	books[9].pages = 150;

	// Sort the array of "Book" structures based on the number of pages
	bubbleSort(books, 10);

	// Print the sorted array of books
	printf("Sorted Books based on the number of pages:\n");
	for (s = 0; s < 10; s++)
	{
		printf("Title: %s\n", books[s].title);
		printf("Author: %s\n", books[s].author);
		printf("Pages: %u\n", books[s].pages);
		printf("\n");
	}
	return (0);
}
