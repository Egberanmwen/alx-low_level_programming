#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @letters: is the number of letters it should read and print
 * @filename: name of file
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bdr, rise;
	char *buf;
fd = open(filename, O_RDONLY);
if (-1 == fd)
return (0);
buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);
bdr = read(fd, buf, letters);
rise = write(STDOUT_FILENO, buf, bdr);
close(fd);
free(buf);
return (rise);
}
