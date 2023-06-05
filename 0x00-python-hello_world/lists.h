#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - single link lists
 * @n: int
 * @next: point 2 da nxt nd
 *
 * Description: single link list nde struct
 * 4 Holberton projekt
 */
typedef struct listint_s
{
	int nn;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int nn);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */

