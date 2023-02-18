#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is %d ", n, y);
	if (y > 5)
	{
		printf("and is greater than 5");
	}
	if (y == 0)
	{
	printf("and the number is 0");
	}
	if (y < 6 && y != 0)
	{
		printf("number is less than 6 and is not 0");
	}
	printf("\n");
	return (0);
}
