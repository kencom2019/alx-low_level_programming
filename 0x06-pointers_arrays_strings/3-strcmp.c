#include "main.h"

/**
 * _strcmp - compares pointers to 2 strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 *
 * Return: if str1 < str2, the nagativ difference of the 1st unmatched char
 *         if str == str2, 0.
 *         if str1 > str2, the +ve difference of the 1st unmached char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2)
}
	
