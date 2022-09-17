#include <stdio.h>

/**
 * main - A program that prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev = 'z';

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');

	return (0);
}
