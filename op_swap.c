#include "monty.h"
/**
 *op_swap - Swaps the top two elements of the stack.
 *@stack: Pointer to the top of the stack.
 *@line_number: Line number in the file.
 *Return: Void. Nothing.
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;
	(void) line_number;

	if (!new || !new->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = new->next;
	if ((*stack)->next != NULL)
	{
		(*stack)->next->prev = new;
		new->next = (*stack)->next;
		new->prev = *stack;
		(*stack)->next = new;
		(*stack)->prev = NULL;
	}
}
