#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: character to be checked
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}

while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 0)
{
printf("%d, ", n);
}
printf("\n");
}
