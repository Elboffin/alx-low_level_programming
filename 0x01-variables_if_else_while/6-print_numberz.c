#include <stdlib.h>
#include <time.h>

#include <stdio.h>



/**
 * main -Entry point
 *
 *  a program that printsnumbers using putchar
 *
 *
 * Return: return 0 (success)
 *
 */

int main(void)
{
int alp;
for (alp = 0; alp < 10; alp++)
{
putchar(alp + '0');
}
putchar('\n');
return (0);
}
