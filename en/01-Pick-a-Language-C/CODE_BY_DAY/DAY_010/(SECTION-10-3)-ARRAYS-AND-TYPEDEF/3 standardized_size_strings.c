#include <stdio.h>

/* OBJECTIVE: Define a size standard for text strings.
   Very useful to ensure that fields like 'Username' or 'Password'
   always have the same character limit throughout the entire system. */

typedef char Username[50];

int main() {
    // 'user' now has space for 49 letters + the null terminator '\0'
    Username user = "Start_Dev";

    printf("Logged in user: %s\n", user);
    printf("Total allocated space: %zu bytes\n", sizeof(Username));

    return 0;
}