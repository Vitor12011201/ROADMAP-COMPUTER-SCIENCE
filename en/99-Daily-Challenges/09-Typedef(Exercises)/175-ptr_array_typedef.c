/* Objective: Handle the visual confusion mentioned by the author when mixing arrays and "hidden" pointers.
1. Create a typedef 'char* String;'.
2. In main, create two variables: 'char letter_a = 'A';' and 'char letter_b = 'B';'.
3. Create a 'String' array (which will actually be an array of pointers) with 2 positions.
4. Point the first position to 'letter_a' and the second to 'letter_b'.
5. Use a loop to print the character that is "inside" each array position.
Reflection: Note how in the loop you have to use '*array[i]'. This is where the confusion the author mentioned happens: you have a '*' but the array declaration didn't have any!
*/

#include <stdio.h>

typedef char* String;

int main() {
    char letter_a = 'A';
    char letter_b = 'B';

    String array[2] = {&letter_a, &letter_b};

    for (int i = 0; i < 2; i++) {

        printf("Letter: %c\n", *array[i]);
    }

    return 0;
}