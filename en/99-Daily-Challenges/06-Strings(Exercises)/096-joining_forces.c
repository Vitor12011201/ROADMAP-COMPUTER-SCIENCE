/* Goal: Manipulate the \0 to join (concatenate) two strings manually.
1. Create two arrays: char destination[20] = "Hello "; and char source[] = "World";.
2. Find where the \0 is in the destination array.
3. Starting exactly at that position, use a loop to copy the letters from source into destination.
Don't forget: At the very end, you need to manually place a \0 at the end of destination so printf doesn't get lost!
4. Print destination and see if it became "Hello World". */

#include <stdio.h>
#include <string.h>

int main()
{
    char destination[20] = "Hello";
    char source[] = "World";

    int i = strlen(destination);
    int j = 0;

    while (source[j] != '\0')
    {
        destination[i] = source[j];
        i++;
        j++;
    }

    destination[i] = '\0';

    printf("Final result [%s]\n", destination);

    return 0;
}