#include "main.h"

/**
* print_line - draws a straight line in the terminal.
*@n: number of times the character _ should be printed

* Return: void
*/

void print_line(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
