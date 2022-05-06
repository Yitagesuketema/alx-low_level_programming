#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
    void *mem_alloc = malloc(b);

    if (!mem_alloc)
        exit(98);

    return (mem_alloc);
}
