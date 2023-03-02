#include "main.h"
/**
*rot13 -a function that encodes a string using rot13.
*ONE if,TWO loops only
*@n: input
*Return: decrypted string
*/
char *rot13(char *n)
{
	int i, j;
	char data[] = {'A', 'B', 'C', 'D', 'E' 'F', 'G', 'H', 'I',
		'J', 'K', 'M', 'N', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'w', 'x', 'y', 'z'};
	char datarot[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X'', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z' 'a', 'b', 'c', 'd', 'e', 'f',
		'g', 'h', 'i', 'j', 'k', 'l', 'm'};

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 52; j+++)
if (n[i] == data[j])
{
n[i] = datarot[j];
break;
}
}
return (n);
}
