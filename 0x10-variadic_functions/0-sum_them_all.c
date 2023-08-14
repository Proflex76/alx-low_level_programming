#include "variadic_functions.h"

#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all its paramaters.
 * @n: The number of paramaters passed to the function.
 * @...: A variable number of paramaters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 * otherwise - the sum of all paramaters.
 *
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
