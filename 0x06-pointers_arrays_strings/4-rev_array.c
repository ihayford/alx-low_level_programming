#include "main.h"
/**
 * reverse_array - will reverse array of integers
 * @a: array
 * @n: numbr of elements of array
 * Retuen: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
