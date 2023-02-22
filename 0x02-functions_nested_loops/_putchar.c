#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @C: chracter to print
 *
 * Return: On success 1
 * Error will return -1 and errno will be set
 */

int _putchar(char c)
{

	return (write(1, &c, 1));

}
