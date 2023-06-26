#include "main.h"

/**
* *leet - check code
* @str: pointer to char
* Description:  a function that encodes a string into 1337.
*
* Return: str
*/

char *leet(char *str)
{
int i = 0, x;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (x = 0; x < 10; x++)
{
if (str[i] == s1[x])
{
str[i] = s2[x];
}
}
}

return(str);
}
