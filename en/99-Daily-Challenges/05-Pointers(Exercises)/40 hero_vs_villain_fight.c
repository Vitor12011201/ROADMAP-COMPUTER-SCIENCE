/* Create a program that simulates a battle between a Hero and a Villain.
Declare Health (HP) and Mana variables for both in main.
Create functions to Attack, Heal, and Recover Mana.
Each function must receive pointers (int *ptr) to modify the original values.
Attack functions must change two values: the target's health and the attacker's mana.
Use a while loop to keep the fight going as long as both have HP greater than zero.
(The goal is to practice how functions use pointers to modify multiple variables from main at the same time).
*/

#include <stdio.h>

void throw_stone(int* target_hp, int* attacker_mana)
{
    *target_hp = *target_hp - 10;
    *attacker_mana = *attacker_mana - 5;
}

void slingshot_attack(int* target_hp, int* attacker_mana)
{
    *target_hp = *target_hp - 20;
    *attacker_mana = *attacker_mana - 10;
}

void sword_attack(int* target_hp, int* attacker_mana)
{
    *target_hp = *target_hp - 30;
    *attacker_mana = *attacker_mana - 15;
}

void heal(int* hp_ptr, int* mana_ptr)
{
    *hp_ptr = *hp_ptr + 10;
    *mana_ptr = *mana_ptr - 5;
    if (*hp_ptr > 100)
    {
        *hp_ptr = 100;
    }
}

void recover_mana(int* mana_ptr)
{
    *mana_ptr = *mana_ptr + 10;

    if (*mana_ptr > 50)
    {
        *mana_ptr = 50;
    } else if (*mana_ptr < 0)
    {
        *mana_ptr = 0;
    }
}

int main()
{
    int user_input;
    int hero_hp = 100;
    int villain_hp = 100;
    int hero_mana = 50;
    int villain_mana = 50;

    printf("Our Hero is walking through the forest when suddenly...\n");
    printf("Our Hero encounters the Villain and they enter into conflict\n");
    printf("Our Hero is the first to attack\n");

    while (hero_hp > 0 && villain_hp > 0)
    {
        printf("\nIt's our HERO's turn to attack, what do you want to do? \n");
        printf("1 - Attack with a Stone\n");
        printf("2 - Attack with a Slingshot\n");
        printf("3 - Attack with the Sword\n");
        printf("4 - Heal yourself\n");
        printf("5 - Recover mana\n");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            throw_stone(&villain_hp, &hero_mana);
            printf("The Hero threw a stone and damaged the Villain (Villain's HP: %d). Current mana (%d)\n", villain_hp, hero_mana);
            break;

        case 2:
            slingshot_attack(&villain_hp, &hero_mana);
            printf("The Hero attacked with a slingshot and damaged the Villain (Villain's HP: %d). Current mana (%d)\n", villain_hp, hero_mana);
            break;

        case 3:
            sword_attack(&villain_hp, &hero_mana);
            printf("The Hero attacked with a sword and damaged the Villain (Villain's HP: %d). Current mana (%d)\n", villain_hp, hero_mana);
            break;

        case 4:
            heal(&hero_hp, &hero_mana);
            if (hero_hp < 100)
            {
                printf("The Hero healed himself (New Hero HP: %d). Current mana (%d)\n", hero_hp, hero_mana);
            }
            else
            {
                printf("(FULL HEALTH) The Hero lost the chance to play this round\n");
            }
            break;

        case 5:
            recover_mana(&hero_mana);
            printf("The Hero recovered Mana (Current mana: %d)\n", hero_mana);
            break;
        }

        if (villain_hp <= 0) break;

        printf("\nNow it's the villain's turn to attack: \n");
        printf("What do you want to do? \n");
        printf("1 - Attack with a staff\n");
        printf("2 - Attack with medium magic\n");
        printf("3 - Attack with the strongest magic\n");
        printf("4 - Heal himself\n");
        printf("5 - Recover mana\n");
        scanf("%d", &user_input);

        switch (user_input)
        {
        case 1:
            throw_stone(&hero_hp, &villain_mana);
            printf("The villain hit the Hero with the staff (Hero's HP: %d). Current mana (%d)\n", hero_hp, villain_mana);
            break;

        case 2:
            slingshot_attack(&hero_hp, &villain_mana);
            printf("The villain hit the Hero with medium magic (Hero's HP: %d). Current mana (%d)\n", hero_hp, villain_mana);
            break;

        case 3:
            sword_attack(&hero_hp, &villain_mana);
            printf("The villain hit the Hero with the strongest magic (Hero's HP: %d). Current mana (%d)\n", hero_hp, villain_mana);
            break;

        case 4:
            heal(&villain_hp, &villain_mana);
            printf("The Villain healed himself (Villain's HP: %d). Current mana (%d)\n", villain_hp, villain_mana);
            break;

        case 5:
            recover_mana(&villain_mana);
            printf("The Villain recovered Mana (Current mana: %d)\n", villain_mana);
            break;
        }
    }

    printf("\n==============================\n");
    if (hero_hp > villain_hp)
    {
        printf("The winner is the Hero!\n");
    }
    else
    {
        printf("The winner is the Villain!\n");
    }
}