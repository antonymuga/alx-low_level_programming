#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function declaration
 * @width: array width
 * @height: array height
 * Return: array
 */

int **alloc_grid(int width, int height);

/**
 * alloc_grid - function definition
 * @width: the array width
 * @height: the array height
 * Description: returns pointer to a 2D array
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int column;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (column = 0; column < row; column++)
			{
				free(grid[column]);
			}
			free(grid);
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			grid[row][column] = 0;
		}
	}
	return (grid);
}

