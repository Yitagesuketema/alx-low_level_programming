#include "main.h"
/**
 * _isupper - check whether a given letter is uppercase or not.
 * @c: the letter to be checked
 * Return: 1 if the letter is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
