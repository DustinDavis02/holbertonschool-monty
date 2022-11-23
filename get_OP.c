#include "monty.h"

/**
* get_opcode - selects the right function for the correct opcode.
*
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
		      {"add", add},
		      {"nop", nop},
		      {NULL, NULL},
	};

	int i = 0;

	while (opcode_func[i].opcode != NULL && strcmp(opcode_func[i].opcode, str) != 0)
		i++;

	return (opcode_func[i].f);
	}
	