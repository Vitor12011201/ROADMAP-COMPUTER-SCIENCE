#include <stdio.h>

/* OBJECTIVE: Create an abstraction layer for system IDs.
 * If the ID needs more space tomorrow (changing to long), you only update the typedef.
 */

typedef int UserID;

void print_id(UserID id) {
    printf("Processing ID: %d\n", id);
}

int main() {
    // We use the semantic name 'UserID' instead of the generic 'int'
    UserID admin = 1001;
    UserID visitor = 5005;

    print_id(admin);
    print_id(visitor);

    return 0;
}