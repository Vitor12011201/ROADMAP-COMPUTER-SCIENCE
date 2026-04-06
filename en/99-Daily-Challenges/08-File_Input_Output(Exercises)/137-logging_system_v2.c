/* Objective: Use the "a" (Append) mode to create a history that never gets erased.
1. Create a function: void add_log(char *msg).
2. Inside this function, open the system.log file in "a" mode.
3. Use fprintf to write the message, adding a "LOG: " prefix.
4. In main, call this function 3 times with different messages
(e.g., "System started", "Connection established", "Sensor error").
5. Check the file. It should have all 3 messages, even if you close and reopen the program.
*/

#include <stdio.h>

void add_log(char *msg)
{
    FILE *fp;

    fp = fopen("system.log", "a");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not open the log file\n");
        return;
    }

    fprintf(fp, "LOG: %s", msg);

    fclose(fp);
}

int main()
{
    add_log("System Started\n");
    add_log("Connection Established\n");
    add_log("Sensor Error\n");

    return 0;
}