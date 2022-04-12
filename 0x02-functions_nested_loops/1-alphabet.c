#include "main.h"
/*
 * print_alphabet - a function that prints the alphabet, in lowercase, followed by a new line.
 * Return : void.
*/
void print_alphabet(void)
 {
	char c='a'; 
	
	do
	{
	_putchar(c);
	c++;
	
	}
	while(c <= 'z');
 	_putchar('\n');
 }
