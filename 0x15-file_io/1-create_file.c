#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: path
 * @text_content: text_content
 * Return: numbers
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[len] != '\0')
		len++;

	wr = write(fd, text_content, len);

	if (wr < 0)
		return (-1);

	close(fd);

	return (1);
}
