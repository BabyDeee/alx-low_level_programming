#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	int i;

	for (i = 0; i >= 0; i++)
	{

		sum = ((i % 3 == 0) + (i % 5 == 0));

		if (sum < 1024)
		{
			printf("%d", sum);
		}
	}
	return (0);
}

