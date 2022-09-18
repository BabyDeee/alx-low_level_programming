#include "main.h"

/**
 * print_alphabet - A function that prints the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		_putchar(small);
	}
	_putchar('\n');
}
