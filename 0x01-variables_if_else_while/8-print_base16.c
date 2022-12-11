#include <stdio.h>

/**
 * main - prints all numbers base 0 to 16
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int num;
	int la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
