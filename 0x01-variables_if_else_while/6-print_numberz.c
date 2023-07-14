#include <stdio.h>
/**
 * main - print single digits without char
 *
 * Return: always (0)
 */
int main(void)
{
int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
