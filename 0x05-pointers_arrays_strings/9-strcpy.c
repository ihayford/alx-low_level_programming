#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination for our value
 * @src: opening value
 * Return: return poter to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
