#include "main.h"
/**
 * print_line -print a straight line
 * @n: the number of line to draw
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
