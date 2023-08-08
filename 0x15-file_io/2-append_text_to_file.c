#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, bytes_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		bytes_w = write(fd, text_content, text_len);
		close(fd);

		if (bytes_w != text_len)
			return (-1);
	}
	else
	{
		close(fd);
		return (1);
	}

	return (1);
}

