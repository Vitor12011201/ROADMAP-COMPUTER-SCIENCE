#include <stdio.h>

// Logical NOT Operator - !

int main() {
    int is_door_open = 0; // False (it is closed)

    // !is_door_open is read as: "If the door is NOT open"
    if (!is_door_open) {
        printf("The door is closed. You may enter.\n");
    }

    return 0;
}