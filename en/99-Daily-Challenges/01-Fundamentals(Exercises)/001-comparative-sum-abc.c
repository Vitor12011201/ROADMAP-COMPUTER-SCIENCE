#include <stdio.h>
#include <stdlib.h>

// 1 - Write an algorithm that reads the values of A, B, and C, then prints the sum of A and B and shows whether the sum is less than C.

int main() {
    int a;
    int b;
    int c;
    printf("Enter the value of A: \n");
    scanf("%d" ,&a);
    printf("Enter the value of B: \n");
    scanf("%d", &b);
    printf("Enter the value of C: \n");
    scanf("%d", &c);
    printf("The sum of values A and B is: %d \n" , a + b);
    if ((a + b) < c) {
        printf("The number C:(%d) is GREATER than the sum of A: (%d) and B: (%d) = %d \n", c , a , b, a + b);
    } else if ((a + b) > c){
        printf("The number C:(%d) is LESS than the sum of A: (%d) and B: (%d) = %d \n", c , a , b , a + b);
    } else {
        printf("The number C:(%d) and the sum of A + B:(%d) are exactly equal \n", c , a + b);
    }
    return 0;
}