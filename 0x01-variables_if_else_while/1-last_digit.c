#include <time.h>
#include <stdio.h>
/* more headres goes there */
/* betty style do for function main goes there*/
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n)
		num = n % 10;
	if (num > 5)
	{
		printf("%d and is greater than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		print("%d and is less that 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n");
	}
	return (0);
}
