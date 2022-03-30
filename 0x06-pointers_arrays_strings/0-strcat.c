#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	/* get the length of dest string */
	for (len = 0; dest[len] != 0; len++)
		;

	/* append src to dest one character at a time */
	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}

	/* return concatenated string */
	return (dest);
}
