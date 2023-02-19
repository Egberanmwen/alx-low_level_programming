#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * betty style doc for function main is inserted here
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Your code is inserted here */

m = n % 10;
if (m > 5)
printf(" last digit of %d is %d and is greater than 5\n", n, m);
if (m == 0)
printf("last digit of %d is %d and is 0\n", n, m);
if (m < 6 && m != 0)
printf("last digit of %d is %d and is less than 6 and not a 0\n", n, m);
return (0);
}
