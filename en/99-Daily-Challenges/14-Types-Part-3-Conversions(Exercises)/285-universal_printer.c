/* Objective: Create a utility function that accepts data of any type using void* and a type indicator.
Instructions:
1. Write a function called void print_data(void *data, char type).
2. Inside it, use a switch(type) structure:
   - If type == 'i', cast data to int*, dereference and print as integer.
   - If type == 'f', cast to float* and print as float.
   - If type == 'c', cast to char* and print as character.
3. In your main, use this same function to print an int x = 42;, a float y = 3.14f;, and a char z = 'A';. */

#include <stdio.h>

void print_data(void *data, char type)
{
    switch (type)
    {
    case 'i':
        printf("%d\n", *(int *)data);
        break;

    case 'f':
        printf("%.2f\n", *(float *)data);
        break;

    case 'c':
        printf("%c\n", *(char *)data);
        break;

    default:
        printf("Invalid type\n");
        break;
    }
}

int main()
{

    int x = 42;

    float y = 3.14f;

    char z = 'A';

    print_data(&x, 'i');

    print_data(&y, 'f');

    print_data(&z, 'c');

    return 0;

}