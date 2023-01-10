#include "main.h"

/**
 *strlen_recursion - Returns the length of a string
 *@s: string to be printed
 *Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	{
		len++;
		len +=_strlen_recursion(s +1);
	}
	return (len);
}
