#include "monty.h"
/**
 *free_files - Free space of a specific function.
 *@stack: Pointer to the satck.
 *Return: Void. Nothing.
 */
void free_files(stack_t **stack)
{
	stack_t *content = *stack;

	while (*stack)
	{
		content = (*stack)->next;
		free(*stack);
		*stack = content;
	}
}
