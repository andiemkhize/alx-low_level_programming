#include "main.h"

/**
 *  read_textfile - reads a text file
 *  prints it to the POSIX standard output
 *  @filename: text file to be read
 *  @letters: number of letters to be read
 *  Return: 0 if function fails, 0 if filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
