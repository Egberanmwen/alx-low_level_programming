#include "main.h"
/**
*rot13 -a function that encodes a string using rot13.
*ONE if,TWO loops only
*@n: input
*Return: decrypted string
*/
char *rot13(char *s)
{
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
if (s[i] == data[j])
{
s[i] = datarot[j];
break;
}
}
return (s);
}
