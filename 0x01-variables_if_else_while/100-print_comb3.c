#include <stdio.h>
/**
 * main -Entry point
 * betty style doc for function main is inserted here
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j, k;

/*your code is inserted here*/
for (j = 48; j <= 56; j++)
{
for (k = 49; k <= 57; k++)
{
if (k > j)
{
putchar(j);
putchar (k);
if (j != 56 || k != 57)
{putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
