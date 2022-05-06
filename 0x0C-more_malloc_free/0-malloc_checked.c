/**
 * @file 0-malloc_checked.c
 * @author Yitagesu K Areda
 * @date 2022-05-06
 * @copyright Copyright (c) 2022 
 */
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b:number of memory block. 
 * Return: on success allocatted memory
 * on fail normal termination with retir n 98.
 */
void *malloc_checked(unsigned int b)
{
void *mem_alloc =malloc(sizeof(int)*b);
    if(!mem_alloc)
    {
    return (98);
    }
return(mem_alloc);
}
