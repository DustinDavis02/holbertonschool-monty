#include "monty.h"

/**
* get_opcode - selects the right function for the correct opcode.
* @str which opcode
* Return: a function pointer.
*/

void (*get_opcode(char *str))(stack_t **stack, unsigned int line_number);
{
	instruction_t opcode_func[] = {
		      {"push", push},
		      {"pall", pall},
		      {"pint", pint},
		      {"pop", pop},
		      {"swap", swap},
		      {NULL, NULL},
	};
	unsigned int i = 0;

	while (opcode_func[i].opcode && strcmp(str, opcode_func[i].opcode) != 0)
		i++;
	if (opcode_fun[i].opcode == NULL)
		return (NULL);
	return (opcode_fun[i].f);
}
