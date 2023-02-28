#include <stdio.h>

/**
 * _strlen - Will return the lenght of a string
 * @str: sting
 * Return: Will return the string length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
