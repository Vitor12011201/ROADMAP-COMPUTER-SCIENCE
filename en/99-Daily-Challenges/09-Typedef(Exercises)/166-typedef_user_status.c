/* Objective: Use typedef to make the code more self-explanatory.
1. Create a typedef int Status;. (Where 1 means "Active" and 0 means "Inactive").
2. Create a struct using typedef called User with char name[30] and a variable of type Status status;.
3. In main, register a user and set their status to 1.
4. If user.status equals 1, print "User is Active". */

#include <stdio.h>

typedef int Status;

typedef struct {
    char name[30];
    Status status;
} User;

int main() {

    User users[2] = {
        {.name = "Julio", .status = 1},
        {.name = "Pedro", .status = 0}
    };

    for (int i = 0; i < 2; i++) {
        if (users[i].status == 1) {
            printf("User %s is currently ACTIVE\n", users[i].name);
        } else {
            printf("User %s is currently INACTIVE\n", users[i].name);
        }
    }

    return 0;
}