#include <stdio.h>
#include <stdarg.h>
#include "h/SystemInstance.h"

void disposeSystemInstance(struct SystemInstance* systemInstance) {
    free(systemInstance->memory);
    free(systemInstance->disk);
}

struct linkedListNode* writeLine(struct linkedListNode* node, char* text, void* input) {
    int length = snprintf(NULL, 0, text, input);
    node->value = malloc(length);
    sprintf(node->value, text, input);
    node->next = malloc(sizeof(struct linkedListNode));

    return node->next;
}

struct linkedListNode* dumpSystemInstance(struct SystemInstance systemInstance) {
    struct linkedListNode* root = malloc(sizeof(struct linkedListNode));
    struct linkedListNode* node = root;

    node = writeLine(node, "Memory: %zu", &systemInstance.memoryCapacity);
    writeLine(node, "Disk: %zu", &systemInstance.diskCapacity);
    // Last one doesn't assign because it creates an extra empty node

    node->next = NULL;

    return root;
}