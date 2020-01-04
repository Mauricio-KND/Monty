#include "monty.h"
/**
 *
 */
void readfile(FILE *file)
{
	stack_t *op_stack = NULL;
	char* buffer = malloc(1024);
	size_t buf_size = 1024;
	char * op_code, *op_arg;

	while (getline(&buffer, &buf_size, file)!= -1)
	{
		op_code = strtok(buffer, "\n\t\r ");
		op_arg = strtok(NULL, "\n\t\r ");
		if (op_code)
		{
			printf("%s\n", op_code);
			if (strcmp(op_code, "push") == 0)
				op_push(&op_stack, 0);
		}
		if (op_arg)
			printf("%s\n", op_arg);
	}
	fclose(file);
}
