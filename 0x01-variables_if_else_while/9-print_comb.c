#include <stdio.h>
/**
 * main - prints all possible combination of single digits numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
int num = '0';

while (num <= '9')
{
putchar(num);
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
