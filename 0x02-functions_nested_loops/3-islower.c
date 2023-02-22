#include <main.h>
/**
*_islower -Checks for lowercase character
*@c: the char to be checked
*betty style doc for function main is inserted here.
*Return: 1,if char is lowercase,else return is 0.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{return (0);
}
return (0);
}
