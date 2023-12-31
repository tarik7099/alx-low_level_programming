#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fp, len, Write;
if (filename == NULL)
{
	return (-1);
}
if (text_content == NULL)
{
	return (1);
}
fp = open(filename, O_WRONLY | O_APPEND);

if (fp == -1)
{
	return (-1);
}
len = 0;
while (text_content[len] != '\0')
{
	len++;
}
Write = write(fp, text_content, len);
close(fp);

if (Write == len)
{
return (1);
}
else
{
return (-1);
}
}

