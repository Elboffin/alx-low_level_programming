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
d = 0;
while (b < 4000000)
if (b % 2 == 0)
{
b = c + d;
if (b == 0)
{
a += b;
}
c = d;
d = b;
}
printf("%li\n", a);
return (0);
}
