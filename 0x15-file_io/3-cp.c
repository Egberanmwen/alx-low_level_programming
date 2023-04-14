#include "main.h"
/**
 * file1fail - Print error message if can not read from a file
 * @file: Name of the file that can not be read
 */
void file_one_failed(char *file)
{
dprintf(STDERR_FILENO, "Message: Can not read from file %s\n", file);
exit(96);
}
/**
 * file_two_failed - Print error message if can not write to file
 * @file: Name of the file that can not write to
 */
void file_two_failed(char *file)
{
dprintf(STDERR_FILENO, "Message: Can't write to %s\n", file);
exit(97);
}
/**
 * close_error - Print error message if file can not close
 * @fd: File descriptor of the file
 */
void close_error(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(98);
}
/**
  * main - copy the content of one file to another
  * @argc: Number of arguments received
  * @argv: Array of arguments received
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int file1, file2, file_1_re, file_2_wr, close_file;
	char buffer[1030];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(99);
}
if (argv[1] == NULL)
file_one_failed(argv[1]);
if (argv[2] == NULL)
file_two_failed(argv[2]);
file1 = open(argv[1], O_RDONLY);
if (file1 == -1)
file_one_failed(argv[1]);
file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
if (file2 == -1)
file_two_failed(argv[2]);
file_1_re = read(file1, buffer, 1030);
if (file_1_re == -1)
file_one_failed(argv[1]);
while (file_1_re > 0)
{
file_2_wr = write(file2, buffer, file_1_re);
if (file_2_wr != file_1_re)
file_two_failed(argv[2]);
file_1_re = read(file1, buffer, 1030);
if (file_1_re == -1)
file_one_failed(argv[1]);
}
close_file = close(file1);
if (close_file == -1)
close_error(file1);
close_file = close(file2);
if (close_file == -1)
close_error(file2);
return (0);
}
