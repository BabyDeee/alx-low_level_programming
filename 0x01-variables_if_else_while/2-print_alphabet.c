#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_case = 'a';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
		putchar('\n');
		return (0);
}
