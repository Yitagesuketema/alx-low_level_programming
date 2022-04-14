#include "main.h"
#include <stdio.h>
/**
 * main - print 1 -100
  * for product of 3 print Fizz
  * for product of 5 print Buzz
  * for product of 3 and 5 print FizzBuzz
 * Return:Always 0
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

	}
	printf('\n');
return (0);
}

