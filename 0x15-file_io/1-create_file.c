#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specified
 * permissions and writes text content.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fp, len, Write;
if (filename == NULL)
{
return (-1);
}
fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fp == -1)
{
return (-1);
}
if (text_content == NULL)
{
close(fp);
return (1);
}
len = 0;
while (text_content[len] != '\0')
{
len++;
}
Write = write(fp, text_content, len);
close(fp);

if (Write == len)
	return (1);
else
	return (-1);
}
