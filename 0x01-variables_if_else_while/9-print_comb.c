#include <stdio.h>

/**
 * main - A program that prints all possible combinations of
 * a single digit number
 *
 * Return: A lways 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	}
	return (0);
}
