#include <stdio.h>

/* OBJECTIVE: Demonstrate the classic bidirectional conversion trick between
   a numeric character (char) and its actual integer value (int) using the ASCII table. */

int main() {
    char char_five = '5'; // ASCII code 53

    // Converting from character to real number (53 - 48 = 5)
    int real_number = char_five - '0';

    printf("Original symbol (char): '%c'\n", char_five);
    printf("Actual ASCII code in RAM: %d\n", char_five);
    printf("Mathematical value obtained:  %d\n\n", real_number);

    // The reverse also works: turning the number 7 into the character '7'
    int number_seven = 7;
    char char_seven = number_seven + '0'; // 7 + 48 = 55 ('7')

    printf("Original number:          %d\n", number_seven);
    printf("Converted to character: '%c' (ASCII %d)\n", char_seven, char_seven);

    return 0;
}