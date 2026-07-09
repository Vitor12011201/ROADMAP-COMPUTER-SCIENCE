/* Objective: Capture the exact moment when the compiler turns a char into an int in the middle of an operation.
Instructions:
1. Declare two variables: char a = 5; and char b = 10;.
2. Print the size of one of them in isolation using sizeof(a). (Should give 1 byte).
3. Now print the size of their sum: sizeof(a + b).
Reflection: Why does the size of the sum come out as 4 bytes (or the size of int on your system) if the two original variables used only 1 byte each? Write the answer in the comment.*/
/* Answer:
Even though a and b are of type char and occupy only 1 byte each,
when they participate in an arithmetic operation like a + b, C applies
a rule called integer promotion.

This means that values smaller than int, such as char and short, are
promoted to int before the operation is performed.
So, in a + b, the compiler does not add two chars directly.

It first treats a and b as int, does the sum as int, and that is why
sizeof(a + b) shows the size of an int, typically 4 bytes.
*/

#include <stdio.h>

int main()
{
    char a = 5;
    char b = 10;

    printf("sizeof(a): %zu byte\n", sizeof(a));
    printf("sizeof(a + b): %zu bytes\n", sizeof(a + b));

    return 0;
}