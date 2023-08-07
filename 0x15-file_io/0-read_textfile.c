#include "main.h"

/**
 * read_textfile - Read a text file and print
 * its content to the standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read and printed, or 0 upon failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes_r, bytes_w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	bytes_r = read(fd, buff, letters);
	bytes_w = write(STDOUT_FILENO, buff, bytes_r);

	if (bytes_w == -1 || bytes_w != bytes_r)
		return (0);

	free(buff);
	close(fd);
	return (bytes_r);
}

