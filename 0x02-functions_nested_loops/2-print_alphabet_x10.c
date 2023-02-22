#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * main - Entry point
 * betty style doc for function main
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int j;
/*Your code is insertde here*/
while (count <= 9)
{
for (j = 'a'; j <= 'z'; j++)
_putchar (j);
_putchar ('\n');
}
}
