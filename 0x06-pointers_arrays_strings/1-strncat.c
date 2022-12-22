#include "main.h"

/**
 * _strncat - concatinates two string at most inserted number
 * @dest: The string to be appended
 * @src: The string to be appended to dest
 * @n: the number of bytes from src to be appended to dest.
 */

char *_strncat(char *dest, char *src, int n);
{
	int index = 0; dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
