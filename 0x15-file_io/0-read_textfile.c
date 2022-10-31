#include "main.h"
/**
 *read_textfile - Reads a text file and prints it to POSIX stdout.
 *@filename: A pointer to the name of the file.
 *@letters: The number of letters the
 *function should read and print.
 *
 *Return: If the function fails or filename is NULL - 0.
 *O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buffer= malloc(sizeof(char) * letters);
if (filename == NULL)
{
return (0);
}
fd =open(filename, O_RDWR);
if (fd == -1)
{
return (0);
}
r = read(fd, buffer, letters);
if (r == -1)
{
return (0);
}
w = write(STDOUT_FILENO, buffer, r);
if (w == -1)
{
return (0);
}
free(buffer);
close(fd);
return (w);
}
