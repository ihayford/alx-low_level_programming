#include "main.h"

/**
 *  _isalpha - checks for alphabets
 *  @c: character we are checking
 *  Return: 1 for character, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
