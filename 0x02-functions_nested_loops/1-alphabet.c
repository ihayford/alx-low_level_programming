#include "main.h"

/**
 * print_alphabet - print the alphabets in lowercase
 *
 * Return: 1
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);

	_putchar('\n');
}
