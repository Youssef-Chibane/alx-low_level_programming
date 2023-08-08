#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Display an error message and exit with failure status.
 * @message: The error message to display.
 */

void error_exit(const char *message)
{
	perror(message);
	exit(EXIT_FAILURE);
}

/**
 * file_handling - Copy contents from source file to destination file.
 * @src_filename: The name of the source file.
 * @dest_filename: The name of the destination file.
 * Return: File descriptor of the destination file, or -1 on error.
 */

int file_handling(const char *src_filename, const char *dest_filename)
{
	int src_fd, dest_fd;

	src_fd = open(src_filename, O_RDONLY);

	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_filename);
		error_exit("Error opening source file");
	}

	dest_fd = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC
									, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
		close(src_fd);
		error_exit("Error creating destination file");
	}

	return (dest_fd);
}

/**
 * close_file - Close a file descriptor and handle errors.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the file descriptor.
 */

void close_file(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %s\n", filename);
		error_exit("Error closing file");
	}
}

/**
 * copy_data - Copy data from source file
 * descriptor to destination file descriptor.
 * @src_fd: The source file descriptor to read from.
 * @dest_fd: The destination file descriptor to write to.
*/

void copy_data(int src_fd, int dest_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_r, bytes_w;

	while ((bytes_r = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_w = write(dest_fd, buffer, bytes_r);
		if (bytes_w == -1)
		{
			error_exit("Error writing to destination file");
		}
	}

	if (bytes_r == -1)
	{
		error_exit("Error reading from source file");
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 * Return: Exit status code (0 for success, 97 for incorrect usage, etc.).
*/

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int dest_fd, src_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	dest_fd = file_handling(file_from, file_to);
	src_fd = open(file_from, O_RDONLY);

	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(dest_fd);
		error_exit("Error opening source file");
	}

	copy_data(src_fd, dest_fd);

	close_file(src_fd, file_from);
	close_file(dest_fd, file_to);

	return (0);
}

