/* OBJECTIVE: Simulate the internal working of functions like 'strcpy', moving two pointers at the same time.
1. Create a source array: char source[] = "Ponteiro"; (C automatically adds '\0' as a sentinel).
2. Create a destination array: char destination[10];.
3. Create two pointers: char *p_source = source; and char *p_destination = destination;.
4. Use a while loop (*p_source != '\0'):
Copy the value: *p_destination = *p_source;
Increment both pointers: p_source++; p_destination++;
5. Do not forget to place the '\0' at the end of the destination after the loop: *p_destination = '\0';.
6. Print the destination array to see if the copy worked.
*/

#include <stdio.h>

int main()
{
    char source[] = "Ponteiro";
    char destination[10];

    char *p_source = source;
    char *p_destination = destination;

    while (*p_source != '\0')
    {
        *p_destination = *p_source;
        p_source++;
        p_destination++;
    }

    *p_destination = '\0';

    printf("%s\n", destination);

    return 0;
}