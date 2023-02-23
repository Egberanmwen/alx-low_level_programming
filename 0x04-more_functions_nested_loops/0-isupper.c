#include "main.h"
/**
*_isupper-Afunction that checks for uppercasse character.
*betty style doc for function main is inserted here
*Return: prints 1 if c is uppercase,0 otherwise.
*@c: a char used to check for upperscase character
*/
int _isupper(int c)
{
if ((c == 'A') && (c <= 'Z'))
{
_putchar (c);
return (1);
}
else
{
return (0);
}
