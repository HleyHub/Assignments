#include <stdio.h>
#include <string.h>

// Structure to hold reservation details
typedef struct
{
	char name[50];
	char flightType[20];
	char source[50];
	char destination[50];
	int seatNumber;
} Reservation;

// Array to store reservations
Reservation reservations[100];
int reservationCount = 0;

// Function to check seat availability
int checkSeatAvailability(const char* flightType)
{
	// In this example, assuming 100 seats are available for each flight type
	if (strcmp(flightType, "international") == 0)
	{
		return (100 - reservationCount);
	}
	else if (strcmp(flightType, "domestic") == 0)
	{
		return (100 - reservationCount);
	}
	return (0);
}

// Function to make a reservation
void makeReservation(const char* name, const char* flightType, const char* source, const char* destination, int seatNumber)
{
	Reservation newReservation;
	strcpy(newReservation.name, name);
	strcpy(newReservation.flightType, flightType);
	strcpy(newReservation.source, source);
	strcpy(newReservation.destination, destination);
	newReservation.seatNumber = seatNumber;
	
	reservations[reservationCount] = newReservation;
	reservationCount++;
}

// Function to print reservation ticket
void printReservationTicket(const Reservation* reservation)
{
	printf("Reservation Ticket: \n");
	printf("Name: %s\n", reservation->name);
	printf("Flight Type: %s\n", reservation->flightType);
	printf("Source: %s\n", reservation->source);
	printf("Destination: %s\n", reservation->destination);
	printf("Seat Number: %d\n", reservation->seatNumber);
}

int main()
{
	char name[50];
	char flightType[20];
	char source[50];
	char destination[50];
	int seatNumber;

	printf("Flight Reservation Application\n");
	printf("Please, enter your name: ");
	scanf("%s", name);
	
	printf("Enter flight type (international/domestic): ");
	scanf("%s", flightType);
	
	printf("Enter source station: ");
	scanf("%s", source);
	
	printf("Enter destination station: ");
	scanf("%s", destination);
	
	printf("Enter seat number: ");
	scanf("%d", &seatNumber);
	
	int availableSeats = checkSeatAvailability(flightType);
	
	if (availableSeats > 0)
	{
		printf("Seats are available for the %s flight.\n", flightType);
		makeReservation(name, flightType, source, destination, seatNumber);
		
		Reservation* reservation = &reservations[reservationCount - 1];
		printReservationTicket(reservation);
	}
	else
	{
	    printf("Sorry, seats are not available for the %s flight.\n", flightType);
	}
	return 0;
}
