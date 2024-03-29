#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: the size of the memory to print
 * @n: number of bytes
 *
 * Description: Write a function that copies memory area.
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
