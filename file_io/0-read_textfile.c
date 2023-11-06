#include "main.h"

/**
* open_file - opens a file and returns the file descriptor
* @filename: name of the file to open
*
* Return: file descriptor on success, -1 on failure
*/
int open_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	return (fd);
}

/**
* read_file - reads from a file descriptor into a buffer
* @fd: file descriptor
* @buffer: buffer to store the data
* @letters: number of letters to read
*
* Return: number of bytes read on success, -1 on failure
*/
ssize_t read_file(int fd, char *buffer, size_t letters)
{
	ssize_t n_read = read(fd, buffer, letters);

	return (n_read);
}

/**
* write_buffer - writes a buffer to standard output
* @buffer: buffer containing data
* @n_read: number of bytes to write
*
* Return: number of bytes written on success, -1 on failure
*/
ssize_t write_buffer(char *buffer, ssize_t n_read)
{
	ssize_t n_written = write(STDOUT_FILENO, buffer, n_read);

	return (n_written);
}

/**
* close_file - closes a file descriptor
* @fd: file descriptor to close
*/
void close_file(int fd)
{
	close(fd);
}

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters it should read and print
*
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open_file(filename);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	n_read = read_file(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close_file(fd);
		return (0);
	}

	n_written = write_buffer(buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close_file(fd);
		return (0);
	}

	close_file(fd);
	free(buffer);

	return (n_read);
}
