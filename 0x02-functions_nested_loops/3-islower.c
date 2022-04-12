/*
 * File: 3-islower.c
 * Auth: Yitagesu K Areda
 */
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c : The character to be checked.
 * Return : 1 or 0 .
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
