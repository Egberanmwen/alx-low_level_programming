#include "main.h"
#include <stdlib.h>

/**
 * array_range - Main Entry
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i, n, size;
	int *ar;
if (min > max)
return (NULL);
size = max - min;
ar = malloc(sizeof(int) * (size  + 1));
i = 0;
n = min;
while (n <= max)
{
ar[i] = n;
n++;
i++;
}
return (ar);
}
