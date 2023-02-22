#include "main.h"

/**
 * print_sign - prints the sign onf a number
 * @n: number of the  printed sign
 * Return: 1 where number is more than zero
 * 0 where number is zero
 * -1 where number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
