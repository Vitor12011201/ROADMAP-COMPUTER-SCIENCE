/* Objective: Combine array typedef with a struct to simulate real hardware.
1. Create a 'typedef float Samples[5];' (an array of 5 readings).
2. Create a 'Sensor' struct containing:
int connection_pin;
Samples data; (the hidden array is here!).
3. Create a function called 'processReading(Sensor *s)' that fills the samples array with values from 0 to 10 (you can use a simple loop).
4. In main, declare a 'Sensor s1', call the function to fill the data, and finally, calculate the average of the 5 samples.
*/

#include <stdio.h>

typedef float Samples[5];

typedef struct {
    int connection_pin;
    Samples data;
} Sensor;

void processReading(Sensor *s) {
    for (int i = 0; i < 5; i++) {
        s->data[i] = i * 2.5;
    }
}

int main() {
    Sensor s1;
    s1.connection_pin = 13;

    processReading(&s1);

    float sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += s1.data[i];
    }

    float average = sum / 5;

    printf("Pin: %d\n", s1.connection_pin);
    printf("Samples Average: %.2f\n", average);

    return 0;
}