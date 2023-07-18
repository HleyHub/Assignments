#include<stdio.h>
#include<string.h>
//structure to hold user data
typedef struct
{
        char username[50];
        char password[50];
        int monthlyElectricityUsage;
        float duePayment;
} User;
//List of users
User users[100];
int userCount =0;
//Function to create a new account
void createAccount(char *username, char *password)
{
        strcpy(users[userCount].username, username);
        strcpy(users[userCount].password, password);
        users[userCount].monthlyElectricityUsage = 0;
        users[userCount].duePayment = 0.0;
        userCount++;
}
//Function to authenticate a user
int authenticate (char*username, char*password)
{
        for(int i = 0; i < userCount; i++)
        {
                if(strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0)
                {
                        //Return user
                        return i;
                }
        }
        //Not found
        return -1;
}
//Function to compute usage
void computeUsage(int userIndex, int units)
{
        //Price per unit
        float rate = 0.75;
        users[userIndex].monthlyElectricityUsage += units;
        users[userIndex].duePayment += units * rate;
}
//Function to make a payment
void makePayment(int userIndex, float amount)
{
        if(users[userIndex].duePayment >= amount)
        {
                users[userIndex].duePayment -= amount;
        }
        else
        {
                printf("Payment amount exceeds due payment.\n ");
        }
}
//Function to print user data
void printUser(int userIndex)
{
        printf("Username: %s\n", users[userIndex].username);
        printf("Monthly Usage: %d\n", users[userIndex].monthlyElectricityUsage);
        printf("Due payment : %.2f\n", users[userIndex].duePayment);
}
int main()
{
        createAccount("user1", "password1");
        createAccount("user2", "password2");
        int userIndex = authenticate("user1", "password1");
        if (userIndex >= 0)
        {
                computeUsage(userIndex, 90);
                makePayment(userIndex, 30.0);
                printUser(userIndex);
        }
        else
        {
                printf("Authentication failed.\n ");
        }
        return 0;
}
