#ifndef _MAIN_
#define _MAIN_
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
int _putcha(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
