#include<stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
long int a, b, c, d;
a = 0;
b = 0;
c = 0;
d = 1;
while (b < 4000000)
{
b = c + d;
if (b % 2 == 0)
{
a += b;
}
c = d;
d = b;
}
printf("%ld\n", a);
return (0);
}
