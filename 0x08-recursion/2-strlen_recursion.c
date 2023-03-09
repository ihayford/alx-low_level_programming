#include "main.h"
/**
 * _strlen_recursion - Returns length of a string
 * @s: String
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
