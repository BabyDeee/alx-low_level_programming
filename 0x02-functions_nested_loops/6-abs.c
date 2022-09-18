#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @num: number to be checked
 * Return: Absolute value
 */

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	return (0);
}

