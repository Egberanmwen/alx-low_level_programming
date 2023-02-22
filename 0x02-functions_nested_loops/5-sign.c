#include "main.h"
/**
 * print_sign -the function that prints the sign of a num.
 * @n:the num being checked.
 * Return:1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero.
 * betyy style doc for function is inserted here.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar (+);
return (1);
}
else if (n == 0)
{
_putchar (0);
return (0);
}
else
{
_putchar (-);
return (-1);
}
return (0);
}
