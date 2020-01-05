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
	char *value = opt.element;
	int transform;

	if (value == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free_files(stack);
		exit(EXIT_FAILURE);
	}
	else if (is_number(value))
	{
		transform = atoi(value);
	}
	else
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		free_files(stack);
		exit(EXIT_FAILURE);
	}
	element = malloc(sizeof(stack_t));
	if (element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_files(stack);
		exit(EXIT_FAILURE);
	}
	element->n = transform;
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

/**
 *is_number - Verify if it is a number.
 *@ar: Argument to verify.
 *Return: An integer.
 */
int is_number(char *ar)
{
	int c = 0;

	while (ar[c] != '\0')
	{
		if ((ar[c] >= '0' && ar[c] <= '9') || (ar[c] == '-' && c == 0))
			c++;
		else
			return (0);
	}
	return (1);
}
