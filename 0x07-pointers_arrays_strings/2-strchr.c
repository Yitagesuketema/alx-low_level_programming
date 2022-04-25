#include "main.h"
/**
 * _strchr -locate the first occurence of character c
 * @s:a string to be searched
 * @c:the character to be located
 * Return: a pointer s if c is found else return Null
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
break;
return (*(s + i) == c ? (s + i) : '\0');
i++;
}
