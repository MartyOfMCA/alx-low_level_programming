#include "3-calc.h"

/**
 * get_op_func - Find the operation to perform.
 *
 * @s: The operator to be used for operation
 *
 * Return: A pointer to a function to perform
 * the operation
 *
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
