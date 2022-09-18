#include "main.h"

/**
 * _isalpha - checks for alphabetic letters
 *
 * @c: character to check
 *
 * Return: 1 for alphabet, 0 for others
 */

int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
