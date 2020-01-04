#include "monty.h"
/**
 *op_push - Pushes an element to the stack.
 *@stack: Double Pointer to first node.
 *@line_number: Line number in the file.
 *Return: Void. Nothing.
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	char *start_n;
	stack_t *node;

	if (start_n == NULL)
	{
		printf("L%d: usage: push integer\n", l);
		free(line);
		return (-1);
	};

	if (_strcmp(flag, "stack") == 0)
		node = add_node(h, atoi(start_n));
	else
		node = add_node_end(h, atoi(start_n));

	free(line);
	if (node == NULL)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	return (0);
}
