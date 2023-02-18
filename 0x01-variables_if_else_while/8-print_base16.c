#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - commands
 * Return: 0
 */

int main(void)

{
	int d;
	int bott;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (bott = 'a'; bott <= 'f'; bott++)
		putchar(bott);
	putchar('\n');

	return (0);
}
