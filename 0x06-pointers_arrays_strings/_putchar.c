#include "main.h"
#include <unistd.h>

/**
 * _putchar - will write the character c to stdout
 * @c : character I am pringting
 * Return: On success 1
 * On error: -1 is returned and errno is appropriately set
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
