#include "main.h"

/**
 * main - Display the number of arguments passed to the
 * program. This is the entry point into the program.
 *
 * @argc: The total number of arguments provided to
 * the program
 * @argv: Array of strings passed as values to the
 * program
 *
 * Return: The success exit code
 *
 **/
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
