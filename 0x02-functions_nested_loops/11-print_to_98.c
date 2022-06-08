#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @n: integer argument
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
	printf("\n");
}
}
