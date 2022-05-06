#include <stdlib.h>
#include "main.h"

/**
  * int_calloc - calloc for ints
  * @nmemb: n members
  * @size: size array should be
  * Return: int *
  */
int *int_calloc(int nmemb, unsigned int size)
{
	int *p, n;
	/* malloc the memory, init to 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (n = 0; n < nmemb; n++)
		p[n] = 0;
	return (p);
}

/**
  * mult - multiply the things
  * @res: int * result is stored in
  * @n1: string num1
  * @n2: string num2
  * @len1: length of num1
  * @len2: length of num2
  * Return: void
  */
void mult(int *res, char *n1, char *n2, int len1, int len2)
{
	/* Declarations */
	int i, j, f1, f2, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		sum = 0;
		f1 = n1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			f2 = n2[j] - '0';
			sum += res[i + j + 1] + (f1 * f2);
			res[i + j + 1] = sum % 10;
			sum /= 10;
		}
		if (sum > 0)
			res[i + j + 1] += sum;
	}
	/* Take these magic numbers out */
	for (i = 0; res[i] == 0 && i < len1 + len2; i++)
	{}
	if (i == len1 + len2)
		_putchar('0');
	for (; i < len1 + len2; i++)
		_putchar(res[i] + '0');
	_putchar('\n');
}

/**
  * is_valid - is the number a valid one
  * @num : char string num
  * Return: int, 1 if true 0 if false
  */
int is_valid(char *num)
{
	int i;
	/* input checking */
	for (i = 0; num[i]; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}
/**
  * err - error function
  * @status: error code to exit with
  * Return: void
  */
void err(int status)
{
	/* Print "Error" and exit 98 */
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}
/**
  * main - Entry Point
  * @argc: argument count
  * @argv: argument string array
  * Return: 0
  */
int main(int argc, char **argv)
{
	int i, j, len1 = 0, len2 = 0;
	int *res;

	/* if there aren't two numbers as arguments */
	if (argc != 3)
	{
		err(98);
	}
	for (i = 1; i < argc; i++)
	{
		/* if the two numbers are erroneous */
		if (!(is_valid(argv[i])))
			err(98);
		/* find the length of each number */
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				len1++;
		}
		if (i == 2)
		{
			for (j = 0; argv[i][j]; j++)
				len2++;
		}
	}
	res = int_calloc(len1 + len2, sizeof(int));
	if (res == NULL)
		err(98);
	/* actual multiply call */
	mult(res, argv[1], argv[2], len1, len2);
	free(res);
	/* final return */
	return (0);
}
