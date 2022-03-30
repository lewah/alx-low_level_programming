#include <stdio.h>
#include "main.h"
/**
 * *_strncat - This function concatenates two strings
 * but uses, at most, n bytes from src, and src does not need to be
 * null-terminated if it contains n or more bytes
 * @src: The string to append to dest
 * @dest: The string to concatenate with src
 * @n: The number of bytes to append
 * Return: The concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
