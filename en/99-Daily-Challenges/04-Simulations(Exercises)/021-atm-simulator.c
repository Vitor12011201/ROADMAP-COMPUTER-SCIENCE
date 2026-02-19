#include <stdio.h>

/* ATM Simulator (using while)
Create a C program that simulates a simple ATM.
The user starts with an initial balance of $ 0.00.
The program should display a menu repeatedly until the user chooses to exit. */

int main()
{
    printf("=== Welcome to the ATM Program ===\n");

    int userResponse = 1;
    int choice;
    float balance = 0;
    float depositAmount = 0;
    float withdrawAmount = 0;

    while (userResponse != 0)
    {
        printf("1 - Deposit\n");
        printf("2 - Withdraw\n");
        printf("3 - View Balance\n");
        printf("0 - Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &userResponse);

        if (userResponse != 1 && userResponse != 2 && userResponse != 3 && userResponse != 0)
        {
            printf("Please enter a valid number\n");
            printf("================================\n");
        }

        switch (userResponse)
        {
        case 1:
            do
            {
                printf("How much do you want to DEPOSIT?: \n");
                scanf("%f", &depositAmount);
                if (depositAmount <= 0)
                {
                    printf("The value entered is invalid. Please enter a positive amount for deposit.\n");
                }
            }
            while (depositAmount <= 0);

            balance = balance + depositAmount;
            printf("Your current balance is: $ %.2f \n", balance);
            printf("=================================\n");

            do
            {
                printf("What would you like to do next?\n");
                printf("Type (1) Return to Main Menu\n");
                printf("Type (0) To Exit Program\n");
                scanf("%d", &choice);
                if (choice == 1)
                {
                    break;
                }
                else if (choice == 0)
                {
                    printf("Program closed. Thank you and come back soon!\n");
                    return 0; // Standard practice: return 0 for success
                }
                else
                {
                    printf("Invalid input. Please enter 1 or 0.\n");
                }
            }
            while (choice != 1 && choice != 0);
            break;

        case 2:
            do
            {
                printf("How much do you want to WITHDRAW?: \n");
                scanf("%f", &withdrawAmount);
                if (balance < withdrawAmount)
                {
                    printf("Insufficient funds for this withdrawal.\n");
                    printf("Your current balance is: $ %.2f \n", balance);
                }
                if (withdrawAmount <= 0)
                {
                    printf("The value entered is invalid. Please enter a positive amount.\n");
                }
            }
            while (withdrawAmount <= 0);

            if (balance >= withdrawAmount)
            {
                balance = balance - withdrawAmount;
                printf("Your new balance is: $ %.2f \n", balance);
            }

            do
            {
                printf("What would you like to do next?\n");
                printf("Type (1) to Return to Main Menu\n");
                printf("Type (0) to Exit Program\n");
                scanf("%d", &choice);
                if (choice == 1)
                {
                    break;
                }
                else if (choice == 0)
                {
                    printf("Thank you for using our program, come back soon!\n");
                    return 0;
                }
                else
                {
                    printf("Invalid input. Please enter 1 or 0.\n");
                }
            }
            while (choice != 1 && choice != 0);
            break;

        case 3:
            printf("Your Balance is: $ %.2f\n", balance);
            printf("What would you like to do next?\n");
            printf("Type (1) to Return to Main Menu\n");
            printf("Type (0) to Exit Program\n");
            scanf("%d", &choice);
            if (choice == 1)
            {
                break;
            }
            else if (choice == 0)
            {
                printf("Thank you for using our program, come back soon!\n");
                return 0;
            }
            break;

        case 0:
            printf("Thank you for using our program, come back soon!\n");
            return 0;
        }
    }
    return 0;
}