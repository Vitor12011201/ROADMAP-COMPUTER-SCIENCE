#include <stdio.h>

int main() {
    int is_on = 1;      // 1 represents true
    int has_error = 0;  // 0 represents false

    if (is_on) {
        printf("The system is on!\n");
    }

    if (!has_error) { // The "!" inverts it: if there is no error (if error is 0)
        printf("No errors found.\n");
    }

    return 0;
}