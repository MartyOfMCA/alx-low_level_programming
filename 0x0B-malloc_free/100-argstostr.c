#include "main.h"

int get_arguments_size(int ac, char *argv[]);
/**
 * argstostr - Concatenate all the arguments passed to program
 * and return a pointer to the concatenated string.
 *
 * @ac: The number of arguments passed
 * @av: The arguments given to the program
 *
 * Return: A pointer to the concatenated string
 *
 **/
char *argstostr(int ac, char **av)
{
	int av_char_count = 0, size_of_av, ac_index = 0, av_index;
	char *new_str;

	size_of_av = get_arguments_size(ac, av);
	new_str	= malloc(size_of_av + 1 * sizeof(char));

	if ((ac == 0) || (av == NULL) || (new_str == NULL))
	{
		return (NULL);
	}
	while (ac_index < ac)
	{
		av_index = 0;
		while (av[ac_index][av_index])
		{
			new_str[av_char_count++] = av[ac_index][av_index++];
		}
		new_str[av_char_count++] = '\n';
		ac_index++;
	}

	new_str[av_char_count] = '\0';

	return (new_str);
}

/**
 * get_arguments_size - Get the total number of bytes
 * in the arguments @argv.
 *
 * @argc: The number of arguments passed. This is used
 * to easily count the characters in each argument
 * @argv: The arguments given to the program
 *
 * Return: The total number of bytes equivalent to
 * the contents of @argv
 *
 **/
int get_arguments_size(int argc, char *argv[])
{
	int argv_index = 0;
	unsigned int size_of_argv = 0;

	while (argv_index < argc)
	{
		size_of_argv += strlen(argv[argv_index]);
		size_of_argv++;
		argv_index++;
	}
	return (size_of_argv);
}
