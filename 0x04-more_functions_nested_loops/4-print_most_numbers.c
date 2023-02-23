#include "main.h"

/**
 * print_most_numbers - print through digits 0 and 9
 * Description: Exclude numbers 2 and 4
 * Return: digits 0 through 9
 */

void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
