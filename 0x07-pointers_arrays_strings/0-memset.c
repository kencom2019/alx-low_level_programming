#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: source stringd
 *@b: the content byte for filling
 *@n: length of buffer
 *Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (1 < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
