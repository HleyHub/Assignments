#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char choices[3][10] = {"Rock", "Paper", "Scissors"};
	int computerChoice, playerChoice;
	int numRounds, round;
	int playerScore = 0, computerScore = 0;

	// Initialize random number generator
	srand(time(0));
	printf("Rock-Paper-Scissors Game\n");

	printf("Please enter the number of rounds to play: ");
	scanf("%d", &numRounds);

	// Check input validity
	if (numRounds <= 0)
	{
		printf("Invalid number of rounds! Please enter a positive number: \n");
		return (0);
	}
	for (round = 1; round <= numRounds; round++)
	{
		printf("\nRound %d\n", round);
		// Computer's choice
		computerChoice = rand() % 3;

		// Player's choice
		printf("Enter your choice: \n");
		printf("1. Rock\n");
		printf("2. Paper\n");
		printf("3. Scissors\n");
		scanf("%d", &playerChoice);

		// Check input validity
		if (playerChoice < 1 || playerChoice > 3)
		{
			printf("Invalid choice! Please enter a valid choice (1-3): \n");
			round--;
			continue;
		}
		// Convert player choice to zero-based index
		playerChoice--;

		// Display choices
		printf("Computer's choice: %s\n", choices[computerChoice]);
		printf("Player's choice: %s\n", choices[playerChoice]);

		// Determine the winner
		if (playerChoice == computerChoice)
		{
			printf("It's a tie!\n");
		}
		else if ((playerChoice == 0 && computerChoice == 2) ||
				(playerChoice == 1 && computerChoice == 0) ||
				(playerChoice == 2 && computerChoice == 1))
		{
			printf("Player wins this round!\n");
			playerScore++;
		}
		else
		{
			printf("Computer wins this round!\n");
			computerScore++;
		}
	}
	// Display final scores
	printf("\nFinal Scores\n");
	printf("Player: %d\n", playerScore);
	printf("Computer: %d\n", computerScore);

	// Determine the overall winner
	if (playerScore > computerScore)
	{
		printf("Player wins the game!\n");
	}
	else if (playerScore < computerScore)
	{
		printf("Computer wins the game!\n");
	}
	else
	{
		printf("It's a tie!\n");
	}
	return (0);
}
