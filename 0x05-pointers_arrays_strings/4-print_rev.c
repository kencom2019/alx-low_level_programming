#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
