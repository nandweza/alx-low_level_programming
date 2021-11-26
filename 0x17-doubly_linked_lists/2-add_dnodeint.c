#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: doubly pointer to the list.
 * @n: data to insert in node
 *
 * Return: address of the new node, NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
        dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = (*head);
	new->prev = NULL;
	(*head) = new;

	return (*head);
}
