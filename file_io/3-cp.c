#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;  /* File descriptors */
    ssize_t n_read, n_written;  /* Number of letters it could read and print */
    char *buffer;  /* Buffer */

    /* Check if the number of arguments is correct */
    if (argc != 3)
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

    /* Allocate memory for the buffer */
    buffer = malloc(1024);
    if (buffer == NULL)
        return (0);

    /* Open the file_from */
    fd_from = open(argv[1], O_RDONLY);

    /* Check if the file_from can be opened */
    if (fd_from == -1)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    /* Open the file_to */
    fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    /* Check if the file_to can be opened */
    if (fd_to == -1)
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

    /* Read from the file_from */
    n_read = read(fd_from, buffer, 1024);

    /* Check if the file_from can be read */
    if (n_read == -1)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    /* Write to the file_to */
    n_written = write(fd_to, buffer, n_read);

    /* Check if the file_to can be written */
    if (n_written == -1 || n_written != n_read)
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

    /* Close the file_from */
    if (close(fd_from) == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

    /* Close the file_to */
    if (close(fd_to) == -1)
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

    free(buffer);

    return (0);
}
