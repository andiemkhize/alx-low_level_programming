#include "main.h"

/**
 * create_file - createsa file
 * @filename: a pointer to the file to created
 * @text_content: a pointer to a string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
