#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0; Success
*/

int main(void)
{
int n;
int is;

srand(time(0));
n = rand() - RAND_MAX / 2;
is = n % 10;
printf("Last digit of %d is ", n);
if (is > 5)
{
printf("%d and is greater than 5\n", is);
}
else if (is == 0)
{
printf("%d and is 0\n", is);
}
else
{
printf("%d and is less than 6 and not 0\n", is);
}

return (0);
}
