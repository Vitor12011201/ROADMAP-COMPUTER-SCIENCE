/*Objective: Create and use an alias for an integer pointer, understanding the syntax
1. Create a typedef 'int *NumberPtr;'.
2. In main, create an 'int n = 50;'.
3. Declare a variable 'NumberPtr p = &n;'.
4. Print the value of 'n' using the pointer 'p'.
*/

#include <stdio.h>

typedef int *NumberPtr;

int main() {
    int n = 50;

    NumberPtr p = &n;

    printf("Value stored in n: %d\n", *p);

    return 0;
}