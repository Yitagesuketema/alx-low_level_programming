#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str:pointer string to be copied.
 * Return: null if memory not allocatted
 * otherewise returned memory allocated in bytes
 */
char *_strdup(char *str)
{
unsigned int len = 0, i;
char *str_copy;
if (str == NULL)
return (NULL);

while (*str != '\0')
{
len++;
}
str_copy =malloc(sizeof(char) * (len));
if (str_copy == NULL)
return (NULL);
i = 0;
while (i < len)
{
str_copy[i] = str[i];
i++;
}
return (str_copy);
}
