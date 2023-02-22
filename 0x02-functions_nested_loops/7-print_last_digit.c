#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @nld: number's lastdigit result.
 * Return: value of the last digit.
 *betty style for function main is inserted here.
 */
int print_last_digit(int nld)
{
	int pld;
pld = (nld % 10);
if (pld < 0)
{
pld = (-1 * pld);
}
_putchar (pld + '0');
return (pld);
}
}
