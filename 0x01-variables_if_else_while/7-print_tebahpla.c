#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse
 *
 * Return: always (0)
 */
int main(void)
{
char alp = 'z';

while (alp >= 'a')
{
putchar(alp);
alp--;
}
putchar('\n');
return (0);
}
