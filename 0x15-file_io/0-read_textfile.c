#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fp, bytes_read, bytes_written;
    char *buffer;

    if (filename == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    bytes_read = read(fd, buffer, sizeof(buffer));
    if (bytes_read == -1)
    {
        close(fd);
        return 0;
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read)
    {
        close(fd);
        return 0;
    }

    close(fd);

    return bytes_written;
}
