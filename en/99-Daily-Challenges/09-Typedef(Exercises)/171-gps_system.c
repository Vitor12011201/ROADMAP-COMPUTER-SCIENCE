/* Objective: Abstract geographic coordinates within an anonymous struct.
1. Create a typedef named 'Coordinate' for the 'double' type.
2. Create an anonymous struct with typedef called 'Location' containing:
Coordinate latitude;
Coordinate longitude;
3. Create a function 'displayLocation(Location l)' that prints the coordinates.
4. In main, instantiate a location (e.g., San Jose: lat -76.30, lon -39.96) and pass it to the function.
*/

#include <stdio.h>

typedef double Coordinate;

typedef struct {
    Coordinate latitude;
    Coordinate longitude;
} Location;

void displayLocation(Location l) {
    printf("Location: San Jose (Lat: %.2f) | (Lon: %.2f)\n", l.latitude, l.longitude);
}

int main() {

    Location l1 = {.latitude = -76.30, .longitude = -39.96};

    displayLocation(l1);

    return 0;
}