#ifndef _LISTS_H_

#define _LISTS_H_

#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - self refferencial struct
 * to creat nodes of a singly linked list
 *
 * @n: integer of data
 * @next: for self refferencial pointer
 * pointer to the next node of a list
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;
size_t print_listint(const listint_t *h);

#endif
