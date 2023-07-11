#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array
 * @width: of array
 * @height: of array
 * Return: pointer to 2d arr
*/

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);
	if (width <= 0 || height <= 0 || tab == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(**tab) * width);
		if (tab[i] == 0)
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
