#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "core/h/System.h"
#include "ParseArgs.h"

const char* ExitMessage = "Exiting OS Terminal";
const char* ExitKeyword = "exit";
const char* RequestDebugKeyword = "debug";

int main(int argc, char *argv[]) {
    size_t memoryCapacity = 0;
    size_t diskCapacity = 0;

    parseArgs(argc, argv, &memoryCapacity);

    void* memory = malloc(memoryCapacity);
    void* disk = file;

    struct SystemInstance systemInstance = BootSystem(memory, memoryCapacity, disk, diskCapacity);

    // This C program opens up a terminal program programmed into the OS and hooks into it

    char *input = malloc(65536);

    while (1) {
        scanf("%s", input);

        if (strcmp(input, RequestDebugKeyword) == 0) {
            printf("Memory: %zu\n", systemInstance.memoryCapacity);
        }

        if (strcmp(input, ExitKeyword) == 0) {
            break;
        }
    }

    free(input);

    printf("%s\n", ExitMessage);

    return 0;
}