#include "monty.h"
/**
 *op_push - Pushes an element to the stack.
 *@stack: Double Pointer to first element.
 *@line_number: Line number in the file.
 *Return: Void. Nothing.
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	char *new_element;
	stack_t *element;

	if (new_element == NULL)
	{
		printf("L%d: usage: push integer\n", l);
		free(line);
		return (-1);
	};

	if (_strcmp(flag, "stack") == 0)
		element = add_node(atoi(new_element));
	else
		element = add_node_end(h, atoi(new_element));

	free(line);
	if (element == NULL)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	return (0);
}
