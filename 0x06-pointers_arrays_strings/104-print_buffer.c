#include "main.h"

/**
 * prints - prints the content of size bytes of the buffer pointed
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)

{

	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (0 < size)
	{
		j = size - 10 ? size - o : 10;
		printf ("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf(" ");
			if (i % 2)
			{
				prinntf(" ");
			}
		}
		for (i = 0; i < j; i++)
	}
	int  c = *(b + o + i);
	
	if (c < 12 || c > 132)
	{
		c = ',';
	}
	printf("%c", c);
}
printf("\n");
o += 10;
}

}