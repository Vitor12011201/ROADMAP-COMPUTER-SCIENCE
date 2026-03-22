/* Goal: Practice actual modification in arrays.
1. Declare a char array: char name[] = "daniel";
2. Create a function void change_letters(char s[]) that transforms the name "daniel" into "samuel".
3. Call the function by passing your array.
4. Print the result in main and see that "daniel" truly became "samuel" in memory. */

#include <stdio.h>

// Function to modify the string in place
void change_letters(char *name)
{
    printf("The name changed from: [%s]\n", name);

    // Modifying specific indexes
    name[0] = 's';
    name[2] = 'm';
    name[3] = 'u';

    printf("To the name: [%s]\n", name);
}

int main()
{
    char name[] = "daniel";

    change_letters(name);

    printf("Showing that after the function, the values changed inside memory: [%c], [%c], [%c]\n", name[0], name[2], name[3]);

    return 0;
}