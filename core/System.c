#include "h/System.h"

struct SystemInstance BootSystem(void* memory, size_t memoryCapacity, void* disk, size_t diskCapacity) {
    struct SystemInstance instance;

    instance.memory = memory;
    instance.memoryCapacity = memoryCapacity;
    instance.disk = disk;
    instance.diskCapacity = diskCapacity;

    return instance;
}