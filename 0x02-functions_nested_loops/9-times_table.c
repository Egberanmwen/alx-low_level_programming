#include "main.h"
/**
*times_table - Prints the 9 times table, starting with 0
*betty style doc for function main is inserted here
*Return:rimes table
*rone = row, cone = column,d = digit of the current result
*/
void times_table(void)
{
	int tone, cone, d;
for (rone = 0; rone <= 9; rone++)
{
_putchar ('0');
_putchar (',');
_putchar (' ');
for (cone = 0; cone <= 9; cone++)
{
d = (rone * cone);
if ((d / 10) > 0)
{
_putchar ((d / 10) + '0');
}
else
{
_putchar (' ');
}
if (cone < 9)
{
_putchar (',');
_putchar (' ');
}
_putchar ('\n');
}
