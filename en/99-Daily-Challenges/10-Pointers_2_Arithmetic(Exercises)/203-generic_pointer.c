/* OBJECTIVE: Practice converting void * to specific types before use.
1. Create an 'int n = 10;' and a 'char c = 'A';'.
2. Create a function 'void print_generic(void *ptr, char type)'.
3. If the type is 'i', the function must convert the pointer to int* and print the value.
4. If the type is 'c', it must convert to char* and print the character.
5. In main, call the function for both variables.
*/

#include <stdio.h>

int n = 10;
char c = 'A';

void print_generic(void *ptr, char type)
{
    if (type == 'i')
    {
        printf("int ptr: %d\n", *(int *)ptr);
    }
    else if (type == 'c')
    {
        printf("char ptr: %c\n", *(char *)ptr);
    }
}

int main()
{
    print_generic(&n, 'i');
    print_generic(&c, 'c');

    return 0;
}