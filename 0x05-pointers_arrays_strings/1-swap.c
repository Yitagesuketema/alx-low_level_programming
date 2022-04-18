#include "main.h"
/**
 * swap_int - Swaps the values of two given integers via pointer
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
int temp_num = *a;
*a = *b;
*b = temp_num;
}
