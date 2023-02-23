#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: this will be th character to be printed
 *
 * Return: 1 when successful
 * return -1 upon error and set errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
