#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
int i;
char mixed[16] = "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar(mixed[i]);
}
putchar('\n');
return (0);
}
