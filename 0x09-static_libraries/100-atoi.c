#include "main.h"
#include <stdio.h>

/**
 *
 * _atoi - converts  a string to an integer
 * @s: string to convert
 *
 * Return: value of integer
 */

int _atoi(char*s)

{

	int j, n, m;

	i = n = 0;
	m = 1;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n *10 + m*(*(s + j)- '0');
		j++;
	}
	return (n);

}
