#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @l: character to be checked
 *
 * Return: last digit(l)
 */

int print_last_digit(int l)
{
	l = l % 10;

	_putchar(l);
	return (l);
}
