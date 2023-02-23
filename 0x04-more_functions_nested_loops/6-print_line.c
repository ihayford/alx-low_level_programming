#include "main.h"

/**
 * print_line - will draw the linefrom input values
 * @n: define number of lines to draw
 * Return: none
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}

}
