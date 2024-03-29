#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees 2d array
 * @grid: 2d grid
 * @height: grid height dimension
 * Description: Frees grid memory
 * Return: Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
