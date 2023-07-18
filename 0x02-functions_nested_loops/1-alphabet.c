#include "main.h"
/**
 * main - Program to print alphabet in lowercase
 *
 * Return: always (0)
 */
void print_alphabet(void)
{
	char low;
	for (low = 'a'; low <= 'z'; low++)
	_putchar(low);
	_putchar('\n');
}
