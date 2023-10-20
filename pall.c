#include "monty.h"
/**
 * f_pall - this funct prints the stack
 * @head: stack head.
 * @counter: no used.
 * Return: the function has no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
