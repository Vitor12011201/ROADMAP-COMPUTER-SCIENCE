/* Create a program that manages a hero's arsenal.
In main, declare three integer variables: int sword = 10;, int shield = 10;, and int boot = 10;.
Create a function called upgrade_item that receives an int *p_item pointer. Inside, add +5 to the pointed value.
Create an int *selected pointer in main.
Ask the user to choose which item they want to upgrade (1-Sword, 2-Shield, 3-Boot).
Use a switch to make the selected pointer point to the address of the chosen variable (e.g., selected = &sword;).
After the switch, call the upgrade_item function passing the selected pointer.
Print the values of all items to see that only the chosen one was changed. */

#include <stdio.h>

void upgrade_equipment(int* ptr)
{
    *ptr = *ptr + 5;
}

int main()
{
    int user_response = 1;
    int sword = 10;
    int shield = 10;
    int boots = 10;

    while (user_response != 0)
    {
        printf("Which Equipment would you like to Upgrade? :\n");
        printf("1 - Sword\n");
        printf("2 - Shield\n");
        printf("3 - Boots\n");
        printf("4 - Check the current power of all equipment\n");
        printf("0 - Exit program\n");
        scanf("%d", &user_response);

        switch (user_response)
        {
        case 1:
            upgrade_equipment(&sword);
            printf("You upgraded the Sword, now your sword has a total of %d power\n", sword);
            break;

        case 2:
            upgrade_equipment(&shield);
            printf("You improved the Shield, now your shield has a total of %d power\n", shield);
            break;

        case 3:
            upgrade_equipment(&boots);
            printf("You improved the Boots, now your boots have a total of %d power\n", boots);
            break;

        case 4:
            printf("The total power of your Sword is : %d\n", sword);
            printf("The total power of your Shield is : %d\n", shield);
            printf("The total power of your Boots is : %d\n", boots);
            break;
        }
    }

    return 0;
}