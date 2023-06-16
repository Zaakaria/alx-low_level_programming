#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";

int i;

for (i = 25; i >= 0; i--)
{
putchar(alp[i]);
}

putchar('\n');

return (0);
}
