#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - assign a random number to the variable n
 *
 * Return: always (0)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
