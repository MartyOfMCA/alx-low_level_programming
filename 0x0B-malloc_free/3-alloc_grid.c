#include "main.h"

void init_grid(int **arr, int width, int height,
		int *row_count, int *col_count);

/**
 * alloc_grid - Create a grid having @height rows
 * and @width columns and all initial values set to 0.
 *
 * @width: The total number of rows to be created
 * @height: The total number of columns to be created
 *
 * Return: A grid with all rows and columns set to 0
 *
 **/
int **alloc_grid(int width, int height)
{
	int row_count = 0, col_count = 0;
	int **arr = malloc(height * sizeof(int *));

	if ((width <= 0) || (height <= 0) || (arr == NULL))
	{
		free(arr);
		return (NULL);
	}

	while (row_count < height)
	{
		arr[row_count] = malloc(width * sizeof(int));
		if (arr[row_count] == NULL)
		{
			free(arr[row_count]);
			col_count = 0;
			while (col_count < width)
			{
				free(arr[col_count]);
				col_count++;
			}
			free(arr);
			return (NULL);
		}
		row_count++;
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	row_count = 0;
	init_grid(arr, width, height, &row_count, &col_count);

	if ((row_count == height) && (col_count == width))
	{
		return (arr);
	}

	return (NULL);
}

/**
 * init_grid - Initialize the contents of the grid with the value 0.
 *
 * @arr: The grid to be initialized
 * @width: The number of columns in the grid
 * @height: The number of rows in the grid
 * @row_count: The number of rows successfully allocated
 * @col_count: The number of columns successfully allocated
 *
 **/
void init_grid(int **arr, int width, int height,
		int *row_count, int *col_count)
{
	while (*row_count < height)
	{
		*col_count = 0;
		while (*col_count < width)
		{
			arr[*row_count][*col_count] = 0;
			*col_count += 1;
		}
		*row_count += 1;
	}
}
