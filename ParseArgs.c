#include <stdio.h>
#include "ParseArgs.h"

const size_t defaultMemoryCapacity = 134200000; // 16 MiB

enum parseArgsError parseArgs(int argc, char *argv[], size_t* memoryCapacity) {
    enum parseArgsError error = SUCCESS;

    if (argc >= 2) {
        char* input = argv[1];
        char* end;

        size_t output = strtol(input, &end, 10);

        if (end == input) {
            error = INVALID_ARGUMENT;

            return error;
        }
        else {
            *memoryCapacity = output;
        }
    }
    else {
        *memoryCapacity = defaultMemoryCapacity;
    }

    return error;
}