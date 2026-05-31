/* Objective: Simulate a bank balance system where multiple functions manipulate and validate the same global resource.
Instructions:
1. Declare a file-scope variable float global_balance = 1000.00;.
2. Create the function void deposit(float amount) that adds the amount to global_balance.
3. Create the function int withdraw(float amount) that checks if there is sufficient balance. If so, subtracts from global_balance and returns 1 (success). If not, does not change the balance and returns 0 (failure).
4. In main, perform a sequence of deposits and withdrawals and print the final balance to test the validations. */

#include <stdio.h>

float global_balance = 1000.00;

void deposit(float amount)
{
    global_balance += amount;
}

int withdraw(float amount)
{
    if (global_balance >= amount)
    {
        global_balance -= amount;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    deposit(10.00);

    if (withdraw(200.00))
    {
        printf("Withdrawal of R$200.00 successfully completed.\n");
    }
    else
    {
        printf("Insufficient balance.\n");
    }

    if (withdraw(100.00))
    {
        printf("Withdrawal of R$100.00 successfully completed.\n");
    }
    else
    {
        printf("Insufficient balance.\n");
    }

    deposit(500.00);

    printf("Final balance: R$%.2f\n", global_balance);

    return 0;
}