/* Goal: Understand that reading out of bounds is bad, but writing is much worse.
Declare an int array grades[2] = {10, 10};.
Try to force an out-of-bounds write: grades[5] = 999;.
Immediately after, try to print grades[5].
Did the program crash (Segmentation Fault) or did it accept the value? */

#include <stdio.h>

int main() {

    int grades[2] = {10, 10};

    grades[5] = 999;

    printf("%d\n", grades[5]);

    return 0;
}