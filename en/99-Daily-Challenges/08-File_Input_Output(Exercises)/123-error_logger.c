/* Objective: Create a system that decides where to send information.
1. Create a function called system_log(int type, char *message).
2. If the type is 0 (INFO), the function should use fprintf to send the message to stdout.
3. If the type is 1 (ERROR), the function should send it to stderr.
4. In main, ask the user to enter a number. If the number is negative, call the function with ERROR type. If positive, call it with INFO type. */

#include <stdio.h>

void system_log(int type, char *message) {

    if (type >= 0) {
        fprintf(stdout, "INFO: %s\n", message);
    } else {
        fprintf(stderr, "ERROR: %s\n", message);
    }
}

int main() {

    int message_type;
    char displayed_message[50];

    fprintf(stdout, "Enter an integer: \n");
    fscanf(stdin, "%d", &message_type);

    fprintf(stdout, "Enter a message: \n");
    fscanf(stdin, "%s", displayed_message);

    system_log(message_type, displayed_message);

    return 0;
}