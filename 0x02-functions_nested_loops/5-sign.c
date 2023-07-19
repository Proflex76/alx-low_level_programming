#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be scanned
 * Return: 1 for positive num, -1 for negative num 0r zero for anything else
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar(40);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(42);
		return (-1);
	}
	else
	{
		_putchar(45);
		return (0);
	}

}
