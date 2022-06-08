#include"main.h"
#include<stdlib.h>

/**
 * main -check the code
 *
 *Return: Always 0.
 */
 
int print_last_digit(int a)
{
int last_digit;
last_digit = a % 10;
if (last_digit < 0)
	last_digit = last_digit * -1;
_putchar ('0' + last_digit);
return (last_digit);
}
