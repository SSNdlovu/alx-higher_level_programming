#include "lists.h"

/**
 * check_cycle - check if a link list contain cyc
 * @list: link list to check them
 *
 * Return: 1 if the list has a cyc, nothing if it not
 */
int check_cycle(listint_t *list)
{
	listint_t *sloww = list;
	listint_t *fastt = list;

	if (!list)
		return (0);

	while (sloww && fastt && fastt->next)
	{
		sloww = sloww->next;
		fastt = fastt->next->next;
		if (sloww == fastt)
			return (1);
	}

	return (0);
}

