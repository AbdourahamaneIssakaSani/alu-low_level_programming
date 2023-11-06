#include "main.h"
#include <string.h>

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	/*File descriptor*/
	int fd;

	/*Number of letters it could read and print*/
	ssize_t n_written;

	/*Check if filename is NULL*/
	if (filename == NULL)
		return (-1);

	/*Open the file*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/*Check if the file can be opened*/
	if (fd == -1)
		return (-1);

	/*Check if text_content is NULL*/
	if (text_content == NULL)
		return (1);

	/*Write to the file*/
	n_written = write(fd, text_content, strlen(text_content));

	/*Check if the file can be written*/
	if (n_written == -1)
		return (-1);

	/*Close the file*/
	close(fd);

	return (1);
}
