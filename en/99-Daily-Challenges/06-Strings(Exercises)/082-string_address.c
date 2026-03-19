/* Goal: Visualize that the variable stores an address, not the letters.
1. Declare char *s = "C is an amazing language";
2. Print the string normally using %s.
3. Now, print the pointer's value (the memory address) using %p.
Example: printf("%p\n", s); */

#include <stdio.h>

int main() {

    char *s = "C is an amazing language";
    printf("%s\n", s);
    printf("The memory address of pointer s is: [%p]\n", s);
    printf("The size of pointer s is: [%zu] bytes\n", sizeof(s));

    return 0;
}