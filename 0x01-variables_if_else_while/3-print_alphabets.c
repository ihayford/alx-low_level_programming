#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Commands
 * Return: 0
 */

int main(void)
{
	char bott;
	for (bott = 'a'; bott <= 'z'; bott++)
		putchar(bott);

	for (bott = 'A'; bott <= 'Z'; bott++)
		putchar(bott);
	putchar('\n');

	return (0);
}
