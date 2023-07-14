#include <stdio.h>
/**
 * main - print hexadecimal numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	char num = '0';
	char lett = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (lett <= 'f')
	{
		putchar(lett);
		lett++;
	}
	putchar('\n');
	return (0);
}
