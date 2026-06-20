/* Objective: Solve the printf limitation mentioned by the author: create your own logic
to print a number in binary using bitwise operators.
Instructions:
1. In main, declare int x = 0b101010; (which is 42 in decimal).
2. To find out if each bit is 0 or 1, use a for loop that starts from the highest bit
   (we'll use 7 to look only at the last byte, from 7 down to 0 decrementing: i--).
3. Inside the loop, use the right shift operator (>>) and the bitwise AND operator (&)
   to isolate the current bit: (x >> i) & 1.
4. Print the result of each bit one next to the other. */

#include <stdio.h>

int main() {

    int x = 0b101010;

    for (int i = 7; i >= 0; i--)
    {
        int bit = (x >> i) & 1;
        printf("Bit(%d): %d\n", i, bit);
    }

    return 0;

}