#include"main.h"
#include<stdio.h>

/**
 * main - description: print _putchar
 *
 * Description: print _putchar
 *
 * Return: 0 success
 *
 */

int main(void)
{
char c[9] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
