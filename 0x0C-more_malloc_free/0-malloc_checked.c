#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b:number of memory block.
 * Return: on success allocatted memory.
 * on fail normal termination with retir n 98.
 */
void *malloc_checked(unsigned int b)
{
	void *mem_alloc = malloc(b);

	if (!mem_alloc)
		exit(98);

	return (mem_alloc);
}

