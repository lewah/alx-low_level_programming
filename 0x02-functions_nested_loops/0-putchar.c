#include <stdio.h>
#include "main.h"

/**
 * main -  prints putchar, followed by a new line
 * Return: Always 0 (Success)
 */

// int main(void)
// {
// 	_putchar('p');
// 	_putchar('u');
// 	_putchar('t');
// 	_putchar('c');
// 	_putchar('h');
// 	_putchar('a');
// 	_putchar('r');
// 	_putchar('\n');

// 	return (0);
// }

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}