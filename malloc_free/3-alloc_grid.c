#include "main.h"
/**
 * alloc_grid - check the code
 * @width: est un int
 * @height: est un int
 * Return: valid the code
 */

int **alloc_grid(int width, int height)
{
	int **c;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = (int **)malloc(height * sizeof(int *));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		c[i] = (int *)malloc(width * sizeof(int));
		if (c[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(c[j]);
			}
			free(c);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			c[i][j] = 0;
	}

	return (c);
}
