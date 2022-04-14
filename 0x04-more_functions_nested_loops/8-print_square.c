#include "main.h"
/**
 * print_square - print # followed by newline in terminal
 * @size:number of # to print
 * Return:void
 */
void print_square(int size)
{
			if (size <= 0)
				_putchar('\n');
			else
			{
			for (i = 1; i <= size; i++)
					{
				_putchar('#');
					}
			}
		_putchar('\n');
}
