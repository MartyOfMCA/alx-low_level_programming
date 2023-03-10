#include "main.h"

/**
 * main - Display the sum of two positive passed
 * as arguments. This is the entry point into the program.
 *
 * @argc: The total number of arguments provided to
 * the program
 * @argv: Array of strings passed as values to the
 * program
 *
 * Return: The success exit code (0) if positive arguments are
 * passed otherwise failure exit code (1)
 *
 **/
int main(int argc, char *argv[])
{
	int sum = 0, arg_count = 1;

	while (arg_count < argc)
	{
		if (is_alphabet(argv[arg_count])
		|| atoi(argv[arg_count]) < 0)
		{
			printf("Error\n");
			return (EXIT_FAILURE);
		}
		sum += atoi(argv[arg_count]);
		arg_count++;
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}

/**
 * is_alphabet - Check whether the given argument is a
 * valid alphabet.
 *
 * @arg: Corresponds to an argument given from the command
 * lin
 *
 * Return: A value to be used by the caller to determine
 * whether an alphabet was provided. 1 denotes a valid
 * alphabet was provided. 0 would mean a non-alphabet
 * character was provided as the argument
 *
 **/
int is_alphabet(char *arg)
{
	int index = 0;

	while (index < (int)strlen(arg))
	{
		if (isalpha(arg[index]))
		{
			return (1);
		}
		index++;
	}
	return (0);
}
