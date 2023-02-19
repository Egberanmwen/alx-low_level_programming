#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * betty style doc for the function main is inserted here
 */
int main(void)
{
	char c;

/*Your code goes here*/
c  = 'z';
while (c >= 'a')
{putchar(c), c--;
}
putchar('\n');
return (0);
}
