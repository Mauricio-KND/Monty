#include "monty.h"
/**
 *readfile - reads a specific file.
 *@file: File to read.
 *Return: Void. Nothing.
 */
void readfile(FILE *file)
{
	stack_t *op_stack = NULL;
	char *buffer = malloc(1024);
	size_t buf_size = 1024;
	char *op_code, *op_arg;
	unsigned int line = 0;
	void (*f)(stack_t**, unsigned int);

	while (getline(&buffer, &buf_size, file) != -1)
	{
		line++;
		op_code = strtok(buffer, "\n\t\r ");
		opt.element = strtok(NULL, "\n\t\r ");
		if (op_code)
		{
			f = op_handler(op_code);
			if (f)
				f(&op_stack, line);
		}
	}
	fclose(file);
	(void)op_code;
	(void)op_arg;
}
