#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0; Success
*/

int main(void)
{
int h;

for (h = 0; h <= 16; h++)
{
scanf("%x", &h);
putchar(h);
}
putchar('\n');

return (0);
}
