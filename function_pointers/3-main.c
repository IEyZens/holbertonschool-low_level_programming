#include "3-calc.h"
/**
 * main - check the code
 * @argc: est un int
 * @argv: est un char pointeur
 * Return: valid the code
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	(void)argc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
