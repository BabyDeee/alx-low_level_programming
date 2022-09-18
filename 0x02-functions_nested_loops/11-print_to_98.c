#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98.
 * @n: character to be checked
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
    for (n = n; n < 98; n++)
    {
       printf("%d, ", n); 
    }
    for (n = n; n > 98; n++)
    {
        printf("%d, ", n);
    }
    if (n == 0)
    {
        printf("%d, ", n);
    }
    printf("\n");
}
