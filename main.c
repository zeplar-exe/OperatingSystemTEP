#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    while (1) {
        char *input = malloc(255);

        scanf("%s", input);

        if (strcmp(input, "exit") == 0) {
            break;
        }

        free(input);
    }

    printf("Goodbye, world!\n");

    return 0;
}