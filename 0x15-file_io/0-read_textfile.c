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

    fp = open(filename, O_RDONLY);
    if (fp == -1)
        return 0;

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
	    close(fp);
	    return (0);
    }
    bytes_read = read(fp, buffer, letters);
    if (bytes_read == -1)
    {
        close(fp);
        return 0;
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read)
    {
        close(fp);
        return 0;
    }

    close(fp);

    return bytes_written;
}
