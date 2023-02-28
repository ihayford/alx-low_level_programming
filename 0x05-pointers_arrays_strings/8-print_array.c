#include "main.h"
#include <stdio.h>

/**
 * print_array - will print n elements of an array of ints
 * @a: Array
 * @n: number of elements in the array
 * Return: void
 */

void print_array(int *a, int n)
{

	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
