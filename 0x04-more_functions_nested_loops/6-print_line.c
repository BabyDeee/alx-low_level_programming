#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: number of times the character _ should be printed
*
* Return: void
*/

void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
