/* Goal: Find a specific character inside a string-array.
1. Create a string char sentence[] = "The rat ate the king's clothes";
2. Use a loop to traverse the string and count how many times the letter 'r' (lowercase) appears.
3. At the end, print the total found. */

#include <stdio.h>

int main() {

    int position[100];
    int counter = 0;
    char sentence[] = "Round and round the rugged rocks the ragged rascal ran";

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == 'r') {
            position[counter] = i;
            counter++;
        }
    }

    printf("The number of 'r's appearing in the Array sentence[] is: [%d] times\n", counter);
    printf("The 'r's found in the String are located at positions: \n");

    for (int i = 0; i < counter; i++) {
        printf("- sentence[%d] ", position[i]);
    }
    printf("\n");

    return 0;
}