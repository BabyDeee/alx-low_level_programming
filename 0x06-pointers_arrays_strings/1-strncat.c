#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: string destination
 * @src: string source
 * @n: the max number of nytes that the function
 * _strncat will use
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[s] != src[n])
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';
	return (dest);
}
