#include "main.h"

/**
 * _islower - check if a character is lowercase
 * @c: the character
 * Return: 1 for lowercase, 0 if it isnt
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
