/* Objective: Traverse and process an array using pointer arithmetic within a loop.
1. Create an array: float prices[5] = {10.5, 20.0, 5.75, 15.2, 8.9};
2. Create a pointer: float *p = prices;
3. Create a variable: float total = 0;
4. Use a for loop from 0 to 4. Inside the loop, add each item's value to the total, but do not use prices[i]. Use pointer arithmetic: total += *(p + i);
5. Finally, print the accumulated total.
*/

#include <stdio.h>

int main() {

    float prices[5] = {10.5, 20.0, 5.75, 15.2, 8.9};

    float *p = prices;

    float total = 0;

    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", *(p + i));
        total += *(p + i);
    }

    printf("Total array value: %.2f\n", total);

    return 0;
}