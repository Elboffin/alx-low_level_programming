#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Entry
 *
 * A program that print letters and no.s using putchar
 *
 *
 *
 * Return: return 0 (success
 *
 */

int main(void)
{
int i;
char alp;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (alp = 'a'; alp <= 'f'; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
