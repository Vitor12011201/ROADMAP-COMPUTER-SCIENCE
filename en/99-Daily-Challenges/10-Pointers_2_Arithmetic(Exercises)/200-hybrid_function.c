/* OBJECTIVE: Confirm that a function accepts both the array name and a pointer.
1. Create a function 'void show_first(int *p)' that simply prints the value of the first element using *p.
2. In main, create an array 'int list[] = {100, 200};' and a pointer 'int *ptr = list;'.
3. Call the function twice: once passing 'list' and once passing 'ptr'.
What to observe: The function works identically, proving that it only cares about the starting address.
*/

#include <stdio.h>

void show_first(int *p)
{
    printf("%d\n", *p);
}

int main()
{
    int list[] = {100, 200};
    int *ptr = list;

    show_first(list);
    show_first(ptr);

    return 0;
}