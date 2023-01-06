#include "main.h"

/**
*_memcpy - fills memory with another buffer
*@src: string for filling
*@n:length of buffer
*@dest: source string
*Return: new string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
