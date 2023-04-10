#include "main.h"

/**
 * main - Copy contents from a file to another.
 *
 * @argc: The number of arguments specified
 * @argv: The arguments given
 *
 * Return: 0 if the operation succeeds otherwise
 * -1
 *
 **/
int main(int argc, char *argv[])
{
	int file_from, file_to, chars_read;
	char *str = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (str == NULL)
		return (-1);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	do {
		chars_read = read(file_from, str, 1024);
		write(file_to, str, chars_read);
	} while (chars_read != 0);
	free(str);
	if (close(file_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	if (close(file_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	return (0);
}
