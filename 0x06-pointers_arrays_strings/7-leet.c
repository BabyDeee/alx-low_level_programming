#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @e: character
 *
 * Return: success
 */

char *leet(char *e)
{
<<<<<<< HEAD
	int i[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int j[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
=======
	int i[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l' 'L'};
	int j[11] = {'4', '4', '3', '3', '0', '0' '7', '7', '1', '1'};
>>>>>>> d0b32a86e80f040c0191a16e53a081336ec64f7a

	int m = 0, n = 0;

	for (; e[n] != '\0'; n++)
	{
		for (; i[m] != '\0'; m++)
		{
			if (e[n] == i[m])
			{
				e[n] = j[m];
			}
		}
	}

	return (e);
}
