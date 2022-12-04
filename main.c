#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ParseArgs.h"
#include "core/h/SystemInstance.h"

const char* LinePrefix = "> ";
const char* ExitMessage = "Exiting OS Terminal";
const char* ExitKeyword = "exit";
const char* RequestDebugKeyword = "debug";

int main(int argc, char *argv[]) {
    size_t memoryCapacity = 0;
    size_t diskCapacity = 0;

    parseArgs(argc, argv, &memoryCapacity);

    struct SystemInstance *systemInstance = malloc(sizeof(struct SystemInstance));

    systemInstance->memoryCapacity = memoryCapacity;
    systemInstance->memory = malloc(memoryCapacity);

    systemInstance->diskCapacity = diskCapacity;
    systemInstance->disk = malloc(diskCapacity);

    // This C program opens up a terminal program programmed into the OS and hooks into it

    char *input = malloc(65536);

    while (1) {
        printf("%s", LinePrefix);
        scanf("%s", input);

        if (strcmp(input, RequestDebugKeyword) == 0) {
            struct linkedListNode* dump = dumpSystemInstance(*systemInstance);

            do {
                printf("%s\n", (char*)dump->value);
            } while ((dump = dump->next) != NULL);
        }

        if (strcmp(input, ExitKeyword) == 0) {
            break;
        }
    }

    free(input);

    disposeSystemInstance(systemInstance);
    free(systemInstance);

    printf("%s\n", ExitMessage);

    return 0;
}