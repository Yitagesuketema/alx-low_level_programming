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
unsigned int len = 0, i, j;
char *str_copy;
if (str == NULL)
return (NULL);

while (*str)
{
len++;
}
str_copy = malloc(sizeof(char) * (len + 1));
if (str_copy == NULL)
return (NULL);
i = 0;
j = 0;
while (j < len)
{
str_copy[j] = str[i];
i++;
j++;
}
str_copy[len] = '\0';
return (str_copy);
}
