#include <stdio.h>
#include <math.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 90; i++)
{
int incr = (i + 10) % 10;
if (floor(incr) == incr)
{
i = i + incr;
continue;
}
if (i < 89)
{
if (i < 10)
{
putchar('0');
}
putchar(i);
putchar(',');
putchar(' ');
}
else
{
putchar(i);
}
}
return (0);
}
