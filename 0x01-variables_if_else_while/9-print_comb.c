#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 *
 */

int main(void)
{


	inti d;

	for (d = 0; d < 10; d++)
	{
	putchar(d)
	if (d != '9')
{	
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
