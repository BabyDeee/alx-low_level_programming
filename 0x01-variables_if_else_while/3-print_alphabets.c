#include <stdio.h>

/**
 * main -A program that prints out both upper and lower case alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_case, upper_case;

	lower_case = 'a';

	upper_case = 'A';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}
		putchar('\n');
	return (0);
}
