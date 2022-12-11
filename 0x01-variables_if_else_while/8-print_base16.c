#include <stdio.h>

/**
 * main - program that prints all the
 * numbers of base 16 in lowercase
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
