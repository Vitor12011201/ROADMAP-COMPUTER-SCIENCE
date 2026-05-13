#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJECTIVE: Encapsulate reallocation logic in a function that handles errors
   and does not leak memory. Work with an array of structures, preserving
   existing data. */

typedef struct {
    int id;
    char name[50];
    float grade;
} Student;

// Function to safely resize a Student array
// Receives the current pointer and the new size. Returns new pointer or NULL on failure.
Student* resize_students(Student *current_list, int new_size) {
    Student *new_list;

    // Try to resize (realloc copies old data if necessary)
    new_list = realloc(current_list, new_size * sizeof(Student));

    if (new_list == NULL) {
        fprintf(stderr, "Error: Failed to resize student array.\n");
        return NULL;  // current_list remains valid; caller decides whether to free it
    }

    // If new elements are beyond the old size, we could initialize them,
    // but realloc does not zero the new ones. In this example, we just return.
    return new_list;
}

int main() {
    Student *students;
    int size = 3;

    // Allocate space for 3 students (using calloc to zero out)
    students = calloc(size, sizeof(Student));
    if (students == NULL) {
        fprintf(stderr, "Fatal error: Initial allocation failed.\n");
        return 1;
    }

    // Fill the first 3
    students[0].id = 1;
    strcpy(students[0].name, "Ana");
    students[0].grade = 8.5;

    students[1].id = 2;
    strcpy(students[1].name, "Bruno");
    students[1].grade = 7.0;

    students[2].id = 3;
    strcpy(students[2].name, "Carla");
    students[2].grade = 9.0;

    printf("Original list (%d students):\n", size);
    for (int i = 0; i < size; i++) {
        printf("ID %d: %s, Grade %.1f\n", students[i].id, students[i].name, students[i].grade);
    }

    // Resize to 5 students
    int new_size = 5;
    Student *temp = resize_students(students, new_size);

    if (temp == NULL) {
        free(students);
        return 1;
    }

    students = temp;  // Update the pointer

    // The new students (indices 3 and 4) contain garbage memory.
    // We need to initialize them manually:
    students[3].id = 4;
    strcpy(students[3].name, "Daniel");
    students[3].grade = 6.5;

    students[4].id = 5;
    strcpy(students[4].name, "Elisa");
    students[4].grade = 8.0;

    printf("\nList after resizing and adding new students (%d students):\n", new_size);
    for (int i = 0; i < new_size; i++) {
        printf("ID %d: %s, Grade %.1f\n", students[i].id, students[i].name, students[i].grade);
    }

    free(students);
    students = NULL;

    return 0;
}