/* Objective: Practice basic integer-to-string conversion using safety.
Instructions:
1. Create a character array char buffer[20];.
2. Declare two integer variables: int goals_gremio = 3; and int goals_inter = 1;.
3. Use snprintf to format and save into the buffer the exact text: "Score: 3 x 1".
4. Print the buffer on the screen using normal printf with %s to check if the conversion worked. */

#include <stdio.h>

int main()
{
    char buffer[20];
    int goals_gremio = 3;
    int goals_inter = 1;

    snprintf(buffer, 20, "Score: %d x %d", goals_gremio, goals_inter);

    printf("%s\n", buffer);

    printf("%s\n", buffer);

    return 0;
}