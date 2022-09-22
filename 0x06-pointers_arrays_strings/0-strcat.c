#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: the destination
 * @src: the source
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	for (; src[s] != '\0'; s++)
	{
		dest[d] = src[s];
		d++;
	}

	dest[d] = '\0';
	return (dest);
}
