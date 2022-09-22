#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, c;

	for (; s1[i]; i++)
	for (; s2[j]; j++)
	if (i <= j)
	{
		c = i;
	}
	else
	{
		c = j;
	}


	for (; k <= c; c++)
	{
		if (s1[k] == s2[k])
		{
			continue;
		}
		else
		{
			l = s1[k] - s2[k];
			break;
		}

	}

	return (l);
}
