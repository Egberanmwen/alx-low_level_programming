#include <stdio.h>
/**
 * main -Enrty point
 * betty style doc for funtion main is inserted here
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

/*Your code is inserted here*/
for (i = 0; i < 100; i++)
if (i < 10)
{putchar (" 0%d", ' ');
}
else if (i >= 10)
{putchar (" %d", ' ');
}

return (0);
}
