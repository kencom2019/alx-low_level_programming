#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	if (n != 2 && n != 4)
	{
	_putchar((n % 10) + '0');
	}
	}
	_putchar('\n');
}
