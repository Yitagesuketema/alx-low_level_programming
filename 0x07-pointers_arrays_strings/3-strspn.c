#include "main.h"
/**
 * _strspn-find the length of bytes of same character
 * @s:string to be searched
 * @accept:string to be compared
 * Return:length of bytes of the string
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, len = 0;
for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
len++;
}
}
if (*(s + i) == '\0')
return (len);
}
