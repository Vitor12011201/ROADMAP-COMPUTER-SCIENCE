/* Goal: Clearly differentiate char (single quotes) from string (double quotes).
1. Declare two variables:
char letter = 'A';
char *text = "A";
2. Try to print the sizeof each of them.
Question: Why is the text size larger than the letter size, if both seem to be just the letter 'A'?
Answer: When using single quotes, the compiler understands it is a Char (only 1 character from the ASCII table) and reserves 1 Byte for the variable in memory.
And char *text: Is a pointer (a memory address). On 64-bit systems, any memory address occupies 8 Bytes, regardless of whether it points to the letter "A" or an entire book. */

#include <stdio.h>

int main() {

    char letter = 'A';
    char *text = "A";

    int char_size = sizeof(letter);
    int string_size = sizeof(text);

    printf("The size of the letter variable (Char): [%d] Bytes\n", char_size);
    printf("The size of the text variable (String): [%d] Bytes\n", string_size);

    return 0;
}