#include <stdio.h>

/* OBJECTIVE: Use typedef to create types that "document" the code.
 * Even though they are all 'int', the name specifies what the variable stores.
 */

typedef int Year;
typedef int Month;
typedef int Day;

int main() {
    // It becomes much clearer what each variable represents
    Year current = 2026;
    Month march = 3;
    Day today = 15;

    printf("Date: %02d/%02d/%d\n", today, march, current);

    return 0;
}