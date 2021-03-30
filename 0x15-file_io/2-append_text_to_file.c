#include "holberton.h"

/**
 * append_text_to_file - append text to file.
 * @filename: path
 * @text_content: text_content
 * Return: numbers
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

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
