/* Create a function called check_system(int *p) that:
If the pointer is NULL, prints: "SYSTEM OFF: Connect the sensor."
If the pointer is NOT NULL, prints: "SYSTEM ACTIVE: Reading value = [value]."
In main, call the function passing the sensor (which is NULL).
Then, point the sensor to the reading (sensor = &reading) and call the function again.*/

#include <stdio.h>

void check_system(int* ptr)
{
    if (ptr == NULL)
    {
        printf("SYSTEM OFF: Connect the sensor.\n");
    } else {
        printf("SYSTEM ACTIVE: Reading value = %d\n", *ptr);
    }
}

int main ()
{
    int* sensor = NULL;
    int reading = 42;

    check_system(sensor);

    sensor = &reading;
    check_system(sensor);

    return 0;
}