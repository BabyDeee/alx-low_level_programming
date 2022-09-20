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
	int diagonal;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < n; t++)
		{
			for (diagonal = 0; diagonal < t; diagonal++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
