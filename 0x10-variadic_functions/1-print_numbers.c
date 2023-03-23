#include "variadic_functions.h"
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n:the number of integers passed to the function
 * return:printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
va_start(nums, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
