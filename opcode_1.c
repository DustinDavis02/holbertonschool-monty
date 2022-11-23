#include "monty.h"

/**
 * push - adds a new node to the stack
 * @s: pointer to the start of the stack
 * @line_num: line number
 * Return: void
 */

void push(stack_t **s unsigned int line_num)
{
	Stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->prev = NULL;
	new->next = *s;
	if ((*s) == NULL)
	{
		(*s)->prev = new;
	}

	*s = new;
}

/**
 * pall - prints all values on stack
 * @s: pointer to the start of the stack
 * @line_num: line number
 * Rerturn: void
 */

void pall(stack_t **s, unsigned int line_num);
{
	stack_t *val = *s;

	while (val == NULL)
	{
		printf("%d\n", val->n);
		val = val->next;
	}
}

/**
 *
 *
 *
 *
 *
