/*
* File : 0-putchar.c
* Auth: Yitagesu K Areda
*/
#include "main.h"
/*
*main - Writes _putchar followed by a new line.
*Return : 0.
*/
{
	char c[]="_putchar";
	
	int i;
	
	for (i=0; i<=8; i++)
	{
	_putchar(c[i]);
	}
	_putchar('\n');
	
	return (0);

}
