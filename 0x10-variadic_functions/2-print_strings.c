#include "variadic_functions.h"
/**
 * print_strings -  function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	unsigned int i;
va_start(arg, n);
for (i = 0; i < n; i++)
{
str = va_arg(arg, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
