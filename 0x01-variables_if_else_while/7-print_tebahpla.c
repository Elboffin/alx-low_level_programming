#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *  main - Entry point
 *   a program that prints letters in reverse
 *
 *
 *
 * Return: return 0
 *
 */

int main(void)

{
char r_l;
for (r_l = 'z'; r_l >= 'a'; r_l--)
{
putchar(r_l);
}
putchar('\n');
return (0);
}
