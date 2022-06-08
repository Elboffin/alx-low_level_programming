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
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 98)
	printf("%d", n);
	printf("\n");
	}

