#include "main.h"

/**
 * read_textfile - Reads the contents from the specified
 * text file.
 *
 * @filename: The file to be read from
 * @letters: The characters to be read from the file
 *
 * Return: The number of characters read from file
 *
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, chars_read, chars_written;
	char *str;

	str = malloc(sizeof(char) * letters);
	if (str == NULL || filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY, 0500);
	if (file_descriptor == -1)
	{
		return (0);
	}
	chars_read = read(file_descriptor, str, letters);
	if (chars_read == -1)
	{
		return (0);
	}
	close(file_descriptor);
	chars_written = write(STDOUT_FILENO, str, chars_read);
	if (chars_written == -1 || chars_written != chars_read)
	{
		return (0);
	}
	return (chars_read);
}
