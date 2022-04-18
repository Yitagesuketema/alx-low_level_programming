#include "main.h"
/**
 * _strlen- returns the length of a string
 * @s: a string to determine the length
 * Return: The length of string
 */
int _strlen(char *s)
{
int len = 0;

while (*s)
{
len++;
return (len);
}
}
