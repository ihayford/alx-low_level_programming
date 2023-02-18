#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Commands
 * Return: 0
 */

int main(void)

{
	char bott;

	for (bott = 'z'; bott >= 'a'; bott--)
		putchar(bott);
	putchar('\n');

	return (0);
}
