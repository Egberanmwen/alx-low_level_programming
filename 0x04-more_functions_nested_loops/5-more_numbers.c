#include "main.h"
/**
*more_numbers - a function that prints 10 times the numbers, from 0 to 14.
*_putchar only three time.
*Reurn: 0-14 * 10 followed by followed by a new line.
*/
void more_numbers(void)
{
	int i, ro;
for (ro = 0; ro <= 14; ro++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar ((1 / 10) + '0');
}
_putchar ((i % 10) + '0');
}
_putchar('\n');
}
