#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;  /* File descriptor */
    ssize_t n_read, n_written;  /* Number of letters it could read and print */
    char *buffer;  /* Buffer */

    if (filename == NULL)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(letters);
    if (buffer == NULL)
        return (0);

    /* Open the file */
    fd = open(filename, O_RDONLY);

    /* Check if the file can be opened */
    if (fd == -1)
    {
        free(buffer);
        return (0);
    }

    /* Read from the file */
    n_read = read(fd, buffer, letters);

    /* Check if the file can be read */
    if (n_read == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Write to standard output */
    n_written = write(STDOUT_FILENO, buffer, n_read);

    /* Check if the file can be written */
    if (n_written == -1 || n_written != n_read)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    close(fd);
    free(buffer);

    return (n_read);
}
