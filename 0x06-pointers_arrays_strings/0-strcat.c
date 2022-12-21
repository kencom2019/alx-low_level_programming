#include "main.h"

/**
 * _strcat - concatenates the string pointed to my @src,
 * null byte,to the end of the stringpointed to by @best
 * @dest: Apointer to the string to be concatinated upon
 * @src: The source string to be appended to @best
 *
 * Return: A pointer to the destination string @best
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
