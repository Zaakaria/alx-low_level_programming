#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i < 9 )
{
putchar(i + ',' + ' ');
} else
{
putchar(i + '$');
}
}
putchar('\n');
return (0);
}
