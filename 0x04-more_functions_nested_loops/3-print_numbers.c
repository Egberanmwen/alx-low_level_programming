#include "main.h"
/**
*print_numbers - a function that prints the numbers, from 0 to 9.
*Return:0-9 foolowed by a new line.
*/
void print_numbers(void)
{
	int i = 0;
while (i < 10)
_putchar (i++ + '0');
_putchar('\n');
}
