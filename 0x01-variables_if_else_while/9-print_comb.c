#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
int i;
for(i = 0; i < 10; i++)
{
if(i < 9 )
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
else
{
putchar(i + '0');
}
}
putchar('\n');
return (0);
}