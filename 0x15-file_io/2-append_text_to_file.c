#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1(success) or -1(failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, i, j = 0;
if (!filename)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
{
return (-1);
}
if (text_content)
{
while (text_content[j])
{
j++;
}
i = write(fd, text_content, j);
if (j != i)
{
return (-1);
}
}
close(fd);
return (1);
}
