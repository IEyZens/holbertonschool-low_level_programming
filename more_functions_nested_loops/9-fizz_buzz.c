#include "main.h"
/**
 * main - check the code
 * @a: est un int
 * Return: Always 0.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0)
			printf("Fizz");
		else if ((a % 5) == 0)
			printf("Buzz");
		else if ((a % 3) == 0) && ((a % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", a);

		if (a == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
