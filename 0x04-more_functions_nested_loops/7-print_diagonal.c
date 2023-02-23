#include "main.h"
/**
*print_diagonal -a function that draws a diagonal line on the terminal.
*@n:is the number of times the character \ should be printed.
*Return:a diagonal.
*/
void print_diagonal(int n)
{
	int co, sp;
if (n <= 0)
{
_putchar ('\n');
}
else
{
for (co = 1; co <= n; co++)
{
for (sp = 1; sp < co; sp++)
{
_putchar (' ');
}
_putchar ('\\');
_putchar ('\n);
}
}
}
