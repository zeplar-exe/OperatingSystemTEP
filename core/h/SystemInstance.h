#include <stdlib.h>
#include "LinkedList.h"

struct SystemInstance {
    void* memory;
    size_t memoryCapacity;
    void* disk;
    size_t diskCapacity;
};

void disposeSystemInstance(struct SystemInstance* systemInstance);
struct linkedListNode* dumpSystemInstance(struct SystemInstance systemInstance);