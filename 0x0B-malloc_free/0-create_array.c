#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of array to allocate
 * @c: character to be allocated
 * Return: Null else return allocated memory.
 */
char *create_array(unsigned int size, char c)
{
    unsigned int index;
    char *str;
    if (size == 0)
        return (NULL);

    str = (char *)malloc(sizeof(c) * size);
    if (str == NULL)
        return (NULL);
    index = 0;
    do
    {
        str[index] = c;
        index++;
    } while (index < size);
    return (*str);
}
