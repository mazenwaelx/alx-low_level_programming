#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - bbe
 * @grid: ff
 * @height: gg
 * Return: Always 0
*/

void free_grid(int **grid, int height)
{
if (grid == NULL)
{
return;
}
for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
