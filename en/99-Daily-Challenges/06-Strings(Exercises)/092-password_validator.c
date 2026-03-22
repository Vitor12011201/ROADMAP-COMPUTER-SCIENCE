/* Goal: Use string length for control logic.
1. Create a string: char password[] = "12345";
2. Create a function that checks if the password is "secure".
3. The rule is: if strlen(password) is less than 6, print "Password too short!". If it's 6 or more, print "Acceptable password". */

#include <stdio.h>
#include <string.h>

void secure_password(char *p)
{
    if (strlen(p) >= 6)
    {
        printf("Acceptable password (Secure)\n");
    }
    else
    {
        printf("Password too short (Insecure)\n");
    }
}

int main()
{
    char password[] = "12345";

    secure_password(password);

    return 0;
}