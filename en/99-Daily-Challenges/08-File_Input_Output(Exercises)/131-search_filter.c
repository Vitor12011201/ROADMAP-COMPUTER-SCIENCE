/* Objective: Create a string "locator" within a file.
1. Create a grocery_list.txt file with several items, one per line (e.g., "Rice", "Beans", "Potato", "Meat").
2. Ask the user to type a word to search for.
3. Traverse the file line by line with fgets.
4. Use the strstr(s, search) function to check if the typed word is in the current line.
5. If strstr does not return NULL, print: "Item found: %s".
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char s[1024];
    char user_response[1024];

    fp = fopen("grocery_list.txt", "w");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    fputs("Rice\n", fp);
    fputs("Beans\n", fp);
    fputs("Meat\n", fp);
    fputs("Potato\n", fp);
    fputs("Papaya\n", fp);
    fputs("Salad\n", fp);
    fputs("Oil\n", fp);
    fputs("Banana\n", fp);

    fclose(fp);

    fp = fopen("grocery_list.txt", "r");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    printf("Enter the item you want to check in the list: \n");
    scanf("%s", user_response);

    int found = 0;


    while (fgets(s, sizeof(s), fp) != NULL) {

        if (strstr(s, user_response) != NULL) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%s is an item on the list\n", user_response);
    } else {
        printf("%s is NOT an item on the list\n", user_response);
    }

    fclose(fp);

    return 0;
}