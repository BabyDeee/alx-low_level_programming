#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @e: character
 *
 * Return: success
 */

char *leet(char *e)
{
	int i[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l' 'L'};
	int j[] = {'4', '4', '3', '3', '0', '0' '7', '7', '1', '1'};

	int m = 0, n = 0;

	for (; e[n] != '\0'; n++)
	{
		for (; e[m] != '\0'; m++)
		{
			if (e[n] == i[m])
			{
				e[n] == j[m];
			}
		}
	}

	return (e);
}
