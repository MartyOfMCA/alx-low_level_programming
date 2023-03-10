#include "main.h"

/**
 * main - Display the name for the program. This is
 * the entry point into the program.
 *
 * @argc: The total number of arguments provided to
 * the program
 * @argv: Array of strings passed as values to the
 * program
 *
 * Return: The success exit code
 *
 **/
int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", *argv);
	return (EXIT_SUCCESS);
}
