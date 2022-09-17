#include <stdio.h>

/**
 * main - A program that prints base 16 numbers in lowecase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char hexa;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}

	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');
	return (0);
}

