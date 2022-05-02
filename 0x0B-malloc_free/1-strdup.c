#include "main.h"
#include <stdlib.h>
/**
 * _strdup -
 * @str:your name (you@domain.com)
 * Return:
 */
char *_strdup(char *str)
{
unsigned int len = 0, i ,j;

char *str_mem_copy;
if (str_mem_copy == NULL)
return (NULL);

while (*str != '\0')
{
len++;
}
str_mem_copy = (char *)malloc(sizeof(char) * len);
if (str_mem_copy == NULL)
return NULL;
i = 0;
for (j = 0; j < len; j++)
{
str_mem_copy[j] = str[i];
i++;
}
return (str_mem_copy);
}
