/* Goal: Practice including the library and using the official function.
Don't forget #include <string.h>
1. Ask the user to type their name.
2. Use strlen() to say: "Hello [name], your name has [X] letters".
3. Use the %zu specifier to print the result of strlen(). */

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter your name: \n");
    scanf("%s", name);

    printf("Hello [%s], welcome, your name has [%zu] letters\n", name, strlen(name));

    return 0;
}