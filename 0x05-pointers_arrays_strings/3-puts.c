#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string followed by new line.
 *@str: a string to be printed.
 *Return: void.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
