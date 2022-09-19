#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: an integer to be swapped
 * @b: another integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
