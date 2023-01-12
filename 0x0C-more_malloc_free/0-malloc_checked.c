#include <stdlib.h>		
#include "main.h"

<<<<<<< HEAD
/**
* string_nconcat - Concatenates two strings using at
* most an inputted number of bytes.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate to s1.
*
* Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
=======
/**		
* malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
*
* Return: a pointer to the allocated memory
>>>>>>> d3777a94216dfd05440cdbbcb51c7496b75b8ecf
*/

void *malloc_checked(unsigned int b)
		
{
		
	void *ptr;
		

		
	ptr = malloc(b);
		

		
	if (ptr == NULL)
		
		exit(98);
		

		
	return (ptr);
		
}
