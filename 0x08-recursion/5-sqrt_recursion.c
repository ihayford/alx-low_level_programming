#include "main.h"

int _sqrt_recursion(int n);
int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: variable
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - use recursion to find natural root
 * @n: number to calculate square root
 * @i: iterator
 *
 * Return: resulting square root
 */

int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
