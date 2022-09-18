#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character to check
 *
 * Return: 1 for lowercase, 0 for others
 */

int _islower(int c)
{
	if (c >= 'a')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');
}
