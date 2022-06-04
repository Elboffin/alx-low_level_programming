#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>



/**
 *main- entry point
 *
 * This is program will assign arandom number to the variable n each time
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("% d is negative\n", n);
else
	printf("%d is positive\n", n);
return (0);
}
