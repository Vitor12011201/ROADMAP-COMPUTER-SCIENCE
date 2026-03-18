/* Goal: Practice simplified pointer syntax.
1. Declare an int array values[3] = {100, 200, 300};.
2. Declare an integer pointer int *ptr;.
3. Instead of using &values[0], use the shorthand: ptr = values;.
4. Print the value pointed to by ptr using the * operator. */

#include <stdio.h>

int main() {

    int values[3] = {100, 200, 300};

    int *ptr = values;

    printf("Showing that values[] == The first element of the Array's base address, which is: [%d]\n", *values);

    return 0;
}