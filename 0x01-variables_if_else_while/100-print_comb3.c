#include <stdio.h>

/**
 * main - A program to print all possi le combinations of 2 digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			if (first < second)
			{
				putchar(first);
				putchar(second);

				if (first != '8' || second != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
