#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: character to be changed
 *
 * Return: success
 */

char *string_toupper(char *c)
{
	int a = 0;

	for (; c[a] != '\0'; a++)
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			c[a] = c[a] - 'a' + 'A';
		}
	}
	return (c);
}
