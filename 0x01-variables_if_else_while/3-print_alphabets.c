#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */

int main(void){
char str[] = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
int i = 0;
while (str[i] != "Z"){
	putchar(str[i]);
	i++;
}
putchar("\n");
return 0;
}
