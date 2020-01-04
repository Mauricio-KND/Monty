#include "monty.h"
/**
 *op_push - Pushes an element to the stack.
 *@stack: Double Pointer to first element.
 *@line_number: Line number in the file.
 *Return: Void. Nothing.
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *element;

	element = malloc(sizeof(stack_t));
	if (element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	element->next = NULL;
	element->prev = NULL;
	if (!(*stack))
		*stack = element;
	else
	{
		element->next = *stack;
		(*stack)->prev = element;
		*stack = element;
	}
	(void)line_number;
}
