#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	pritf("Size of a char: %lu byte(s)\n", sizeof(char));
	pritf("Size of an int: %lu byte(s)\n", sizeof(int));
	pritf("Size of a long int %lu byte(s)\n", sizeof(long int));
	pritf("Size of long long : %lu byte(s)\n", sizeof(long long int));
	pritf("Size of a float: %lu byte(s)\n", sizeof(float))
	return (0);
}
