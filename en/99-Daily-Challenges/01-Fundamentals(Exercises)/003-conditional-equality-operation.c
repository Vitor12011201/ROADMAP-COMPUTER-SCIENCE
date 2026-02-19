#include <stdio.h>
#include <stdlib.h>

// 3 - Write an algorithm that reads two integer values A and B; if the values of A and B are equal, it should add the two values,
// otherwise, it should multiply A by B. At the end of either calculation, the result must be assigned to a variable C and
// its value printed on the screen.

int main () {
    int a;
    int b;
    int c;
    printf ("Enter number A: \n");
    scanf("%d" , &a);
    printf ("Enter number B: \n");
    scanf("%d", &b);
    if (a == b) {
        printf("Numbers A and B are equal \n");
        c = a + b;

    } else {
        printf("Numbers A and B are different \n");
        c = a * b;
    }
    printf ("Final result: %d \n" , c);
}