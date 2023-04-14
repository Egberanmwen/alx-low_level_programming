#include  "main.h"
/**
 *create_file - creates a file
 *@filename : name of file
 *@text_content: content of the file
 *Return : 1 on success, -1 on failure
 *file can not be created, file can not be written, write “fails”, etc
 */
int create_file(const char *filename, char *text_content)
{
	int dor, alpha, wri;
if (!filename)
return (-1);
dor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0400);
if (dor == -1)
return (-1);
if (!text_content)
text_content = "";
for (alpha = 0; text_content[alpha]; alpha++)
;
wri = write(dor, text_content, alpha);
if (wri == -1)
return (-1);
close(dor);
return (1);
}
