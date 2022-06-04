#include <stdio.h>



/**
 *
 * main - print the letters of the alphabet
 *
 *
 * print the letters of the alphabet in lower then in uppercase
 *
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
char alp, d;
for (alp = 'a'; alp <= 'z'; alp++)
{
putchar(alp);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}

