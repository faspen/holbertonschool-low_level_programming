#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0; Success
*/

int main(void)
{

int n;
int o;

for (n = 48; n <= 57; n++)
{

for (o = 48; o <= 57; o++)
{
putchar(n);
putchar(o);
if (o != 57 || n != 57)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);

}
