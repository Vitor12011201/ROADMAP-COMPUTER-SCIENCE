#include <stdio.h>

// We use the a[] notation, which is visually easier to read for arrays
void double_values(int a[], int size) {
    for (int i = 0; i < size; i++) {
        // Takes the value stored in memory, multiplies it by 2,
        // and saves the result in the same place (overwrites it)
        a[i] = a[i] * 2;
    }
}

int main() {
    int bets[] = {100, 200, 500};

    // By passing 'bets', we are passing the address where the numbers live
    double_values(bets, 3);

    // The original array now has doubled values
    printf("New bets: %d, %d, %d\n", bets[0], bets[1], bets[2]);

    return 0;
}