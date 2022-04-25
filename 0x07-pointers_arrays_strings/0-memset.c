#include <stdio.h>
/**
 * _memset -fills memory with a constant byte
 * @s:string pointer
 * @b:a constant char
 * @n:number of bytes to be filled
 * Return: a string pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
