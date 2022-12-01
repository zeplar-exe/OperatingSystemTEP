#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* ExitMessage = "Exiting OS Terminal";

int main() { // This C program opens up a terminal program programmed into the OS and hooks into it
    while (1) {
        char *input = malloc(255);

        scanf("%s", input);

        if (strcmp(input, "exit") == 0) {
            break;
        }

        free(input);
    }

    printf("%s\n", ExitMessage);

    return 0;
}