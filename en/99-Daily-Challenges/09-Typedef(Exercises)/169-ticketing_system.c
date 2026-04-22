/* Objective: Create code where the data type is "shielded" by typedef, making maintenance easier.
1. Use typedef to create the following aliases:
ID for the type 'unsigned int'.
KM for the type 'float'.
2. Create an anonymous struct with typedef called 'Flight' containing:
ID code;
KM distance;
3. In main:
4. Declare a 'Flight f1 = {12345, 850.50};'.
5. Create a function named 'printFlight' that receives a 'Flight' struct and prints the data. */

#include <stdio.h>

typedef unsigned int ID;
typedef float KM;

typedef struct {
    ID code;
    KM distance;
} Flight;

void printFlight(Flight f) {
    printf("ID: %u\nDistance: %.2f KM\n", f.code, f.distance);
}

int main() {

    Flight f1 = {.code = 12345, .distance = 850.50};

    printFlight(f1);

    return 0;
}