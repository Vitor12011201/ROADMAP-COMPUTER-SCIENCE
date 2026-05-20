/* Objective: Apply aligned_alloc to allocate an array of structures with alignment greater than the default
1. Define a Sensor structure with fields:
   - timestamp (unsigned long long)
   - value (double)
   - status (char)
2. Knowing that in some embedded systems it may be advantageous to align this structure to 32 bytes (for cache or DMA), do:
3. Ask the user for the number N of sensors (positive, max 100).
4. Allocate an array of N Sensor structures using aligned_alloc with 32-byte alignment.
   The total size must be N * sizeof(Sensor), and must be a multiple of 32.
   (If N * sizeof(Sensor) is not a multiple of 32, round up to the next multiple – but to simplify, ensure that sizeof(Sensor) is already a multiple of 32? Not necessarily; use calculation: total_size = ((N * sizeof(Sensor) + 31) / 32) * 32.)
5. Fill the sensors with dummy data (timestamp = i*1000, value = i*0.5, status = 'A').
6. Print the base address of the array and the address of each element, showing that each starts at an offset multiple of 32.
7. Free the memory. */

#include <stdio.h>
#include <stdlib.h>

struct Sensor
{
    unsigned long long timestamp;
    double value;
    char status;
};

int main()
{
    int num_sensors = 0;

    printf("Enter the number of sensors: ");
    scanf("%d", &num_sensors);

    if (num_sensors <= 0 || num_sensors > 100)
    {
        fprintf(stderr, "Invalid quantity\n");
        return 1;
    }

    size_t normal_size =
        num_sensors * sizeof(struct Sensor);

    size_t total_size =
        ((normal_size + 31) / 32) * 32;

    struct Sensor *sensors =
        aligned_alloc(32, total_size);

    if (sensors == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        return 1;
    }

    for (int i = 0; i < num_sensors; i++)
    {
        sensors[i].timestamp = i * 1000;
        sensors[i].value = i * 0.5;
        sensors[i].status = 'A';
    }

    printf("\nBase address of the array: %p\n",
           (void *)sensors);

    printf("\nsizeof(struct Sensor): %zu bytes\n",
           sizeof(struct Sensor));

    for (int i = 0; i < num_sensors; i++)
    {
        printf(
            "\nSensor %d\n"
            "Address: %p\n"
            "Offset: %lld bytes\n"
            "Timestamp: %llu\n"
            "Value: %.2f\n"
            "Status: %c\n",

            i,

            (void *)&sensors[i],

            (long long)(
                (char *)&sensors[i] -
                (char *)sensors),

            sensors[i].timestamp,
            sensors[i].value,
            sensors[i].status);
    }

    free(sensors);
    sensors = NULL;

    return 0;
}