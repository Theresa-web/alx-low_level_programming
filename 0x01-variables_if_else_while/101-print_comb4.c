#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	int j;
	int k;
	
	for (i = 0; j <= 9; j++)
	{
		for (j = 0; j <=9; j++)
		{
			for (k = o; k <= 9; k++)
			{k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || j !=8 || k != 9)
					{
						putchar(',');
							putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}