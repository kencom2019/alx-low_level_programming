#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0 success
 */
void print_alphabet_x10(void);
{
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			-putchar(la);
		_putchar('\n');
	}
}
