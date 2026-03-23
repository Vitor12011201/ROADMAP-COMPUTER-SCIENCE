#include <stdio.h>

/*
 * Goal: Show that assigning pointers does not copy the data.
 */
int main() {
    char original[] = "Original";
    char *nickname;

    // THIS DOES NOT COPY THE STRING!
    // 'nickname' now points to the same memory location as 'original'
    nickname = original;

    // If we change the nickname...
    nickname[0] = 'X';

    // ...the original changes too!
    printf("Original: %s\n", original); // Prints "Xriginal"
    printf("Nickname: %s\n", nickname);  // Prints "Xriginal"

    return 0;
}