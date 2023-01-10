#include "main.h"

/**
 *_strlen_recursion - prints recursive character
 *@s: string to be printed
 *Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\')
	return 0;
	else
	return 1 + _strlen_recursion(s + 1);
}
