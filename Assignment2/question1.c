#include <stdio.h>

// Define the "Date" structure
struct Date
{
	unsigned int day;
	unsigned int year;
	unsigned int month;
};

// A function to compare two "Date" structures. The result will return -1 if
// date2 is more recent, 0 if they are the same, and  1 if date1 is more recent
int compare_dates(struct Date date1, struct Date date2)
{
	if (date1.year > date2.year)
	{
		return (1);
	}
	else if (date1.year < date2.year)
	{
		return (-1);
	}
	else
	{
		// If years are the same, check months
		if (date1.month > date2.month)
		{
			return (1);
		}
		else if (date1.month < date2.month)
		{
			return (-1);
		}
		else
		{
			// If months are the same, check days
			if (date1.day > date2.day)
			{
				return (1);
			}
			else if (date1.day < date2.day)
			{
				return (-1);
			}
			else
			{
				// If days are the same, the dates are the same
				return (0);
			}
		}
	}
}

int main()
{
	struct Date date1 = {15, 7, 2023};
	struct Date date2 = {18, 7, 2023};
	int result;

/*	date1 = printf("Please enter the first date: ");
	scanf("%d", date1);
	date2 = printf("Please enter the second date: ");
	scanf("%d", date2);*/

	result = compare_dates(date1, date2);
	if (result == 1)
	{
		printf("date1 is recent than date2.\n");
	}
	else if (result == -1)
	{
		printf("date2 is recent than date1.\n");
	}
	else
	{
		printf("Both dates are equal.\n");
	}
	return (0);
}
