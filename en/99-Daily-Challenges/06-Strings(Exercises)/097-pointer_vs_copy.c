/* Objective: See the difference between pointing and copying.
1. Create a string char original[] = "C is top";.
2. Create a pointer char *fake_copy = original;.
3. Create an array char real_copy[20]; and use strcpy(real_copy, original);.
4. Change the first letter of fake_copy to 'B'.
5. Print all three: original, fake_copy, and real_copy.*/

#include <stdio.h>
#include <string.h>

int main() {

    char original[] = "C is top";
    char *fake_copy = original;
    char real_copy[20];

    strcpy(real_copy, original);

    fake_copy[0] = 'B';

    printf("original[] = %s - Memory Address [%p]\n", original, (void*)original);
    printf("fake_copy  = %s - Memory Address [%p]\n", fake_copy, (void*)fake_copy);
    printf("real_copy  = %s - Memory Address [%p]\n", real_copy, (void*)real_copy);

    return 0;
}