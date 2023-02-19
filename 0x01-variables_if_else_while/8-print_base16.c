#include <stdio.h>
/**
 * main -Entry point
 *betty style doc for function main is inserted here
 *Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char c;
c = 'a';
while (d < 10)
{putchar (d + '0'), d++;
}
while (c <= 'f')
{putchar (c), c++;
}
putchar ('\n');
return (0);
}
