#include "main.h"
/**
 *_strpbrk -find the first occurence of a characture
 * @s:a string to be searched
 * @accept: a string to be searced by s
 * Return:a string pointer
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
goto search_end;
search_end:
return (s[i] != '\0' ? s + i : '\0');
}
