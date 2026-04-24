#include <stdio.h>

/* OBJECTIVE: Use UPPER_SNAKE_CASE for type definitions.
   Less common today, but still found in older codebases
   or in types representing fixed configurations. */

typedef struct {
    int width;
    int height;
} SCREEN_CONFIG;

int main() {
    SCREEN_CONFIG config = {1920, 1080};
    printf("Resolution: %dx%d\n", config.width, config.height);
    return 0;
}