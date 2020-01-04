#include "monty.h"
/**
 *op_add - Adds the top two elements of the stack.
 *@stack: Pointer to the top of the stack.
 *@line_number: Line number in the file.
 *Return: Void. Nothing.
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (!*stack || !(*stack)->next)
		new = *stack;
	*stack = (*stack)->next;

	(*stack)->n += new->n;
	free(new);
	(*stack)->prev = NULL;
	(void)line_number;
}
