#include "main.h"
/**
 *append_text_to_file - a function that appends text at the end of a file.
 *@filename: the file to open and append
 *@text_content: the text to append to a file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, paste, k;
if (filename == NULL)
return (-1);
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
if (text_content)
for (k = 0; text_content[k]; k++)
{
paste = write(file, text_content, k);
if (paste == -1)
return (-1);
}
close(file);
return (1);
}
