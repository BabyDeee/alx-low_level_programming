#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int r = 0, rev;

	for (; r < n/2; r++)
	{
		rev = a[r];
		a[r] = a[n-1-r];
		a[n-1-r] = rev;
	}
}
