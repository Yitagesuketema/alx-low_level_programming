#include "main.h"
/**
 * print_alphabet_x10 : a function that prints 10 times the alphabet. 
 * in lowercase.
 * followed by a new line.
 * Return : void .
 */
void print_alphabet_x10(void)
{
int i = 0;
	
	while (i <= 9)
	{ 
	char c = 'a';
	 
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		}
	_putchar('\n');
	i++;
	}

	
}
