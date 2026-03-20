/* Goal: Understand the danger of not knowing the string's actual size.
In some examples, it's common to use a condition like i < 13 to traverse "Hello, world!", since the number of characters is known.
What if we don't want to count by hand?
1. Create a program with char s[] = "Any sentence";
2. Use a for loop without a fixed number (like 13). Use the condition s[i] != '\0' so the loop stops by itself at the right place.
3. Inside the loop, print the character and its index: s[0] = A, s[1] = n... */

#include <stdio.h>

int main() {
    char s[] = "Any given sentence";

    for (int i = 0; s[i] != '\0'; i++) {
        printf("s[%d] = %c\n", i, s[i]);
    }

    return 0;
}