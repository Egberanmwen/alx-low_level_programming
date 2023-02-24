#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * betty style doc for function main is inserted here
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
/*srand(time(0));
*n = rand() - RAND_MAX / 2;
*/
/* Your code is inserted here */

if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
/*return (0);*/
}
