/* 🎮 Exercise: The XP (Experience) System
Imagine you are programming an RPG. The hero earns experience, but there are rules for it.
Your goal:
Create a function called calculate_xp.
This function should receive two parameters: int current_xp and int bonus.
Inside the function, multiply the bonus by 2 and add it to current_xp.
In main:
Create a variable called my_xp starting at 100.
Ask the user to type the bonus the hero earned.
Important: Try to update the my_xp variable using the function, so the new value is saved.
At the end, print the value of my_xp. */

#include <stdio.h>

int calculate_xp(int current_xp, int bonus)
{
    int updated_xp = current_xp + (bonus * 2);
    return updated_xp;
}

int main()
{
    int bonus;
    int my_xp = 100;

    printf("The journey was long and you earned extra XP!\n");
    printf("Enter how much XP you gained on your quest: ");
    scanf("%d", &bonus);


    my_xp = calculate_xp(my_xp, bonus);

    printf("Congratulations! You earned %d extra XP. With the bonus, it doubles to: %d\n", bonus, bonus * 2);
    printf("Your current total XP is: %d\n", my_xp);

    return 0;
}