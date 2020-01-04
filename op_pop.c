#include "monty.h"
/**
 *op_pop - Removes the top element of the stack.
 *@stack: Pointer to the stacks's top.
 *@line_number: Line number in the file.
 *Return: Void. Nothing.
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (node == NULL)
	{
		printf("L%d: can't pop an empty %s\n", l, flag);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	free(node);
}
