#include <stdio.h>
int main()
{
        float deposit_amount, withdraw_amount, balance= 25000.00;
        int pin, option;
        int login_attempts=0;

	//login screem
        printf("Welcome");
        printf("Please, enter your PIN ");
        scanf("%d", &pin);
        ////login
        while (pin != 1990)
        {
                login_attempts++;
                if(login_attempts >= 3)
                {
                        printf("Maximum login attempts: Error\n");
                        return 0;
                }
                printf("Sorry, invalid PIN. Please, try again: ");
                scanf("%d", &pin);
        }
        //Main menu
        while(1)
        {
                printf("Main menu: \n");
                printf("1-Withdraw  \n");
                printf("2-Deposit \n");
                printf("3Check the balance \n");
                printf("4-Exit \n");
                printf("Enter your number (1-4): ");
                scanf("%d", &option);
                switch (option)
                {
                        case 1:
                                //Withdraw
                                printf("Enter the withdrawal amount: ");
                                scanf("%f", &withdraw_amount);
                                if(withdraw_amount>balance)
                                {
                                        printf("Insufficient balace! \n");
                                }
                                else
                                {
                                        balance -= withdraw_amount;
                                        printf("Withdrawal successful! Remaining balance:%2f\n ", balance);
                                }
                                        break;
                        case 2:
                                        //Deposit
                                        printf("Enter your deposit amount: ");
                                        scanf("%f", &deposit_amount);
                                        balance += withdraw_amount;
                                        printf("Withdrawal successful! New balance:%2f\n ", balance);
                                        break;
                        case 3:
                                        //check balance
                                        printf("Your current balance is: %.2f\n ", balance);
                                        break;
                        case 4 :
                                        //Exit
                                        printf("Exiting the program\n ");
                                        return 0;
                        default:
                                        printf("Invalid option! Please try again.\n");
                                        break;
                }
        }
        return 0;
}
