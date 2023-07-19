#include <stdio.h>

// Define the "Date" structure
struct Date
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
};

// A function to compare two "Date" structures. The result will return -1 if
// date2 is more recent, 0 if they are the same, and  1 if date1 is more recent
int valid_date(const struct Date* date)
{
	// Validation for day, month, and year value
	if (date->month < 1 || date->month > 12)
	{
		return (0);
	}
	if (date->day < 1 || date->day > 31)
	{
		return (0);
	}
	if (date->month == 2)
	{
		// Check for leap year if it's February
		if ((date->year % 4 == 0 && date->year % 100 != 0) || date->year % 400 == 0)
		{
			return (date->day <= 29);
		}
		else
		{
			return (date->day <= 28);
		}
	}
	else if (date->month == 4 || date->month == 6 || date->month == 9 || date->month == 11)
	{
		return (date->day <= 30);
	}
	else
	{
		return (1);
	}
}

int compare_dates(const struct Date* date1, const struct Date* date2)
{
	// Compare the years first
	if (date1->year > date2->year)
	{
		return (1);
	}
	else if (date1->year < date2->year)
	{
		return (-1);
	}
	else
	{
		// If years are equal, compare the months
		if (date1->month > date2->month)
		{
			return (1);
		}
		else if (date1->month < date2->month)
		{
			return (-1);
		}
		else
		{
			// If months are equal, compare the days
			if (date1->day > date2->day)
			{
				return (1);
			}
			else if (date1->day < date2->day)
			{
				return (-1);
			}
			else
			{
				// If everything is equal, the dates are the same
				return (0);
			}
		}
	}
}

int main()
{
	struct Date date1, date2;
	int result;

	// Input data for date1
	printf("Please enter the first date (day month year): ");
	scanf("%u %u %u", &date1.day, &date1.month, &date1.year);

	// Input data for date2
	printf("Please enter the second date (day month year): ");
	scanf("%u %u %u", &date2.day, &date2.month, &date2.year);

	// Check if the input dates are valid
	if (!valid_date(&date1) || !valid_date(&date2))
	{
		printf("This date is invalid!\n");
		return (1);
	}
	result = compare_dates(&date1, &date2);
	if (result > 0)
	{
		printf("date1 is recent than date2\n");
	}
	else if (result < 0)
	{
		printf("date2 is recent than date1\n");
	}
	else
	{
		printf("Both dates are equal.\n");
	}
	return (0);
}
