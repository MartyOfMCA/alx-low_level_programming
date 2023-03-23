#include "3-calc.h"

#define EXIT_CODE_WRONG_ARGS 98
#define EXIT_CODE_INV_OPERATOR 99
#define EXIT_CODE_DIVIDE_BY_ZERO 100

/**
 * main - Perform calcution from given
 * arguments.
 *
 * @argc: The number of arguments provided
 * @argv: The arguments provided
 *
 * Return: The success exit code.
 * 98 if the wrong number of arguments are
 * provided. 99 if the wrong operator is
 * provided or 100 if the user tries to divide
 * by 0
 *
 **/
int main(int argc, char *argv[])
{
	int operand_one, operand_two, result;
	char *op_code;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(EXIT_CODE_WRONG_ARGS);
	}
	op_code = argv[2];
	if (op_code[1])
	{
		printf("Error\n");
		exit(EXIT_CODE_INV_OPERATOR);
	}

	calc = get_op_func(op_code);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(EXIT_CODE_INV_OPERATOR);
	}

	operand_one = atoi(argv[1]);
	operand_two = atoi(argv[3]);
	result = calc(operand_one, operand_two);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
