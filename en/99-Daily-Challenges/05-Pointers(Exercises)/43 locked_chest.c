/* Create a mini-RPG with the following rules:
In main, have a variable int sword_damage = 50;.
Have a pointer called hero_hand that starts as NULL.
Create a while loop that shows a menu:
1 - Attack: If hero_hand is NULL, the hero attacks with hands (damage 5). If it is NOT NULL, the hero attacks with the sword (uses the value pointed to by the pointer).
2 - Open Chest: The hero finds the sword! Here you must make hero_hand point to the address of sword_damage.
0 - Exit.*/

#include <stdio.h>

void attack_logic(int* weapon_ptr, int* target_hp)
{
    if (weapon_ptr == NULL)
    {
        *target_hp = *target_hp - 5;
        printf("The Hero attacked using his bare hands\n");
    }
    else
    {
        *target_hp = *target_hp - *weapon_ptr;
        printf("The Hero attacked using the sword\n");
    }
}

int main()
{
    int user_input;
    int* hero_hand = NULL;
    int villain_hp = 150;
    int sword_damage = 20;

    printf("Our Hero encountered a Villain in a forest\n");
    printf("Behind our hero, there is a secret CHEST\n");

    while (user_input != 0 && villain_hp > 0)
    {
        printf("\nWhat do you want to do now?\n");
        printf("1 - Attack the Villain\n");
        printf("2 - Run and get the CHEST before being attacked by the villain\n");
        printf("0 - Exit battle\n");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            attack_logic(hero_hand, &villain_hp);
            printf("The Hero attacked the villain: (Villain HP: %d)\n", villain_hp);
            break;

        case 2:
            if (hero_hand == NULL) {
                printf("The Hero opened the Chest and found a sword!\n");
                hero_hand = &sword_damage;
            } else {
                printf("Your sword is already equipped\n");
            }
            break;
        }
    }

    if (villain_hp <= 0) {
        printf("\nThe Hero defeated the Villain, congratulations!\n");
    }

    return 0;
}