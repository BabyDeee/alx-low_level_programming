#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination of string
 * @src: source string
 * @n: max number of bytes that can be copied
 *
 * Return: A copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;

	for (; d < n && src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}

	for (; d < n; d++)
	{
		dest[d] = '\0';
	}
	return (dest);
}
