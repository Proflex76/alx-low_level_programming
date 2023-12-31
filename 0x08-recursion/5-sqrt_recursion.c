#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)

{
	if ((i * i) == n)
		return (i);

	if (i == n / 2)
		return (-1);

	return (_sqrt_recursion(n, i + 1));

}

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */

int_sqrt(int n, int i)

	int sqrt = i * i;

	if (sqrt > n)
	return (-1);

	if (sqrt == n)
	return (i);

	return (sqrt(n, i + 1));

}
