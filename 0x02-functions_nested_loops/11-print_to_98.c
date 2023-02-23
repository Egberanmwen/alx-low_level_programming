#include "main.h"
/**
*print_to_98 -Prints all natural numbers from n to 98
*@n:number input
*betty style doc for function main is inserted here
*Return: Always 0 (Success);
*/
void print_to_98(int n)
{
if (n < 98)
{
printf("%d", n);
if (n != 98)
{
printf(',');
}
n++;
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(",");
}
n--;
else
{
printf("98");
}
printf("\n");
}
