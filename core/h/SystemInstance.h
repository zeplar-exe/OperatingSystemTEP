#include <stdlib.h>

struct SystemInstance {
    void* memory;
    size_t memoryCapacity;
    void* disk;
    size_t diskCapacity;
};