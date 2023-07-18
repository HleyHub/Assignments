#include <stdio.h>
#include <string.h>

// Structure to hold user data
typedef struct
{
    char username[50];
    char password[50];
    int monthlyElectricityUsage;
    float duePayment;
} User;

// List of users
User users[100];
int userCount = 0;

// Function to create a new account
void createAccount()
{
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    strcpy(users[userCount].username, username);
    strcpy(users[userCount].password, password);
    users[userCount].monthlyElectricityUsage = 0;
    users[userCount].duePayment = 0.0;
    userCount++;

    printf("Account created successfully.\n");
}

// Function to authenticate a user
int authenticate()
{
    char username[50];
    char password[50];
    int i;

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    for (i = 0; i < userCount; i++)
    {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0)
        {
            // Return user index
            return (i);
        }
    }

    // Not found
    return -1;
}

// Function to compute usage
void computeUsage(int userIndex)
{
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Price per unit
    float rate = 0.75;
    users[userIndex].monthlyElectricityUsage += units;
    users[userIndex].duePayment += units * rate;

    printf("Usage computed successfully.\n");
}

// Function to make a payment
void makePayment(int userIndex)
{
    float amount;
    printf("Enter payment amount: ");
    scanf("%f", &amount);

    if (users[userIndex].duePayment >= amount)
    {
        users[userIndex].duePayment -= amount;
        printf("Payment made successfully.\n");
    }
    else
    {
        printf("Payment amount exceeds due payment.\n");
    }
}

// Function to print user data
void printUser(int userIndex)
{
    printf("Username: %s\n", users[userIndex].username);
    printf("Monthly Usage: %d\n", users[userIndex].monthlyElectricityUsage);
    printf("Due payment: %.2f\n", users[userIndex].duePayment);
}

int main()
{
    int choice;

    while (1)
    {
        printf("Electricity Billing System\n");
        printf("--------------------------\n");
        printf("1. Create Account\n");
        printf("2. Authenticate\n");
        printf("3. Compute Usage\n");
        printf("4. Make Payment\n");
        printf("5. Print User Data\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAccount();
            break;

        case 2:
        {
            int userIndex = authenticate();
            if (userIndex >= 0)
            {
                printf("Authentication successful.\n");
            }
            else
            {
                printf("Authentication failed.\n");
            }
            break;
        }

        case 3:
        {
            int userIndex = authenticate();
            if (userIndex >= 0)
            {
                computeUsage(userIndex);
            }
            else
            {
                printf("Authentication failed.\n");
            }
            break;
        }

        case 4:
        {
            int userIndex = authenticate();
            if (userIndex >= 0)
            {
                makePayment(userIndex);
            }
            else
            {
                printf("Authentication failed.\n");
            }
            break;
        }

        case 5:
        {
            int userIndex = authenticate();
            if (userIndex >= 0)
            {
                printUser(userIndex);
            }
            else
            {
                printf("Authentication failed.\n");
            }
            break;
        }

        case 6:
            printf("Exiting the program.\n");
            return (0);

        default:
            printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    }

    return (0);
}
