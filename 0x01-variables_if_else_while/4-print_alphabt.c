#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Commands
 * Return: 0
 */

int main(void)

{

	char bott, e, q;

	e = 'e';
	q = 'q';

	for (bott = 'a'; bott <= 'z'; bott++)
	{
		if (bott != e && bott != q)
			putchar(bott);
	}
	putchar('\n');
	return (0);
}
