#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buffer;
	ssize_t t, p;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	p = read(fd, buffer, letters);

	if (p < 0)
	{
		free(buffer);
                return (0);
	}
	t = write(STDOUT_FILENO, buffer, p);

	if (t < 0)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (p);
}
