#include "main.h"

/**
 * _memcpy - @n bytes from area pointed
 * @dest: pointer
 * @src: source buffer
 * @n: number
 *
 * Return: Apointer to the destination buffer @dest
 */

char*_memcpy(char*dest, char*src, unsigned int n)

{

	unsigned int index;
	char*destination = dest;
	const char*source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return(dest);

}
