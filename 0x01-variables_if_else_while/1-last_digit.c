#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main  - check last digit
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
		printf("and is bigger than 5")
	}
	return (0);
}
