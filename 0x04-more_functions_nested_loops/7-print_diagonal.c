#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < n; t++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
