#include "monty.h"
/**
 *op_pop - Removes the top element of the stack.
 *@stack: Pointer to the stacks's top.
 *@line_number: Line number in the file.
 *Return: Void. Nothing.
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		if ((*stack)->next)
			*stack = (*stack)->next;
		if (*stack)
		{
			if ((*stack)->prev)
				free((*stack)->prev);
			else
				free(*stack);
		}
	}
	else
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
