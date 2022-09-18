#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char small;

	while (i < 10)
	{
		small = 'a';

		while (small <= 'z')
		{
			_putchar(small);
			small++;
		}
		i++;
		_putchar('\n');
	}
}
