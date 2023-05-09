#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result, text_length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	text_length = 0;
	while (text_content[text_length] != '\0')
		text_length++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_result = write(fd, text_content, text_length);
	if (write_result == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
