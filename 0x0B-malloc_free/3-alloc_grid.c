#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - bbe
 * @width: ff
 * @height: gg
 * Return: Always 0
*/
int **alloc_grid(int width, int height)
{
int **ar, i , j;
if (width <= 0 || height <= 0)
return (NULL);
ar = (int **)malloc(height * sizeof(int *));
if (ar == NULL)
return (NULL);
for (int i = 0; i < height; i++)
{
ar[i] = (int *)malloc(width * sizeof(int));
if (ar[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(ar[j]);
}
free(ar);
return (NULL);
}
for (int j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}
