#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: string for added content
 *
 * Return: On function failure or filename is NULL, -1
 * On success, 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;

		w = write(fd, text_content, len);

		if (w == -1)
			return (-1);
	}

	close(fd);

	return (1);
	}
}
