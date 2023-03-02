#include "main.h"
/**
*_strncat - a function that concatenates two strings.
*@dest: copy to
*@src: copy from
*@n: input of max bytes to be used
*Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
