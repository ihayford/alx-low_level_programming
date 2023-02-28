#include "main.h"
/**
 * swap_int - will swap values of 2 integers
 * @a: one of the integers
 * @b: another integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
