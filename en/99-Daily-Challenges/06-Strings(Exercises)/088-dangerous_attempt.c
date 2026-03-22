/* Goal: Experience a memory error (or undefined behavior) firsthand.
1. Declare a string using a pointer: char *danger = "Do not change me";
2. Try to change the first letter: danger[0] = 'X';
3. Try to run the program.
What happened? Did the program close by itself? Did it throw an error?
(This proves that the pointer points to read-only memory). */

#include <stdio.h>

int main()
{
    char *danger = "Do not change me";

    danger[0] = 'X';

    printf("%s", danger);

    return 0;
}