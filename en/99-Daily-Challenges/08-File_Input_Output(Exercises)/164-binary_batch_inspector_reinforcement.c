/* Scenario: A factory produces parts in batches. Each batch has an identification number and a quantity of defective parts. Your program must identify which batches should be discarded.
1. Create a Batch struct with: int id, int total_parts, and int defective.
2. In the main function, create an array with 4 batches:
   ID 101: 500 parts, 5 defective.
   ID 102: 300 parts, 45 defective.
   ID 103: 450 parts, 10 defective.
   ID 104: 200 parts, 40 defective.
3. Write this array to the file batches.bin.
4. Reopen the file for reading.
5. Inspection Action (Single Loop): Iterate through the file and, for each batch, calculate the defect rate (defective divided by total).
6. If the defect rate is higher than 10% (0.10), print: [ALERT] Batch %d REJECTED (Rate: %.1f%%).
7. At the end of the loop, show how many batches in total were approved and how many were rejected. */

#include <stdio.h>

struct Batch {
    int id;
    int total_parts;
    int defective;
};

int main() {
    struct Batch batches[4] = {
        {.id = 101, .total_parts = 500, .defective = 5},
        {.id = 102, .total_parts = 300, .defective = 45},
        {.id = 103, .total_parts = 450, .defective = 10},
        {.id = 104, .total_parts = 200, .defective = 40}
    };
    struct Batch temp = {0};
    int approved_count = 0;
    int rejected_count = 0;

    FILE *fp;

    fp = fopen("batches.bin", "wb");
    if (fp == NULL) {
        fprintf(stderr, "Error opening file for writing\n");
        return 1;
    }
    fwrite(batches, sizeof(struct Batch), 4, fp);
    fclose(fp);

    fp = fopen("batches.bin", "rb");
    if (fp == NULL) {
        fprintf(stderr, "Error opening file for reading\n");
        return 1;
    }

    printf("--- BATCH INSPECTION REPORT ---\n");

    while (fread(&temp, sizeof(struct Batch), 1, fp) > 0) {

        float failure_rate = (float)temp.defective / temp.total_parts;

        if (failure_rate > 0.10) {
            printf("[ALERT] Batch %d REJECTED (Rate: %.1f%%)\n", temp.id, failure_rate * 100);
            rejected_count++;
        } else {
            approved_count++;
        }
    }

    printf("\nSUMMARY:\n");
    printf("Approved: %d\nRejected: %d\n", approved_count, rejected_count);

    fclose(fp);
    return 0;
}