#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *  main - a program that prints alphabets except q and e
 *
 *
 * Return: return 0
 *
 */

int main(void)

{
char alp;
for (alp = 'a' ; alp <= 'z'; alp++)
{
if (alp == 'q' || alp == 'e')
{
}
else
{
putchar(alp);
}
}
putchar('\n');
return (0);
}
