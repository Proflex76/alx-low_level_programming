#include "lists.h"

/**
 * free_listp - free a linked list
 * @head: head of a list
 *
 * Return: no return
 */

void free_listp(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;

	}
}

/**
 * B
 * print_listint_safe - prints a linked list
 *
 * @head: pointer to be list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listint_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->(temp) = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->(temp))
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;

	}
	free_listp(&hptr);
	return (nodes);
}
