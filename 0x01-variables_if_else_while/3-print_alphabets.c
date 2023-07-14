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
        char low = 'a';
	char upp = 'A';

        while (low <= 'z')
        {
                putchar(low);
                low++;
        }
	while (upp <= 'Z')
        {
                putchar(upp);
                upp++;
	}
        putchar('\n');
        return (0);
}

