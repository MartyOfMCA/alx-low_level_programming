#include "main.h"

/**
 * main - Display the product of two numbers passed
 * as arguments. This is the entry point into the program.
 *
 * @argc: The total number of arguments provided to
 * the program
 * @argv: Array of strings passed as values to the
 * program
 *
 * Return: The success exit code (0) if two arguments are
 * passed otherwise failure exit code (1)
 *
 **/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (EXIT_SUCCESS);
}
