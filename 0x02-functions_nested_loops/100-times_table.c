#include <stdio.h>

/**
 * print_times_table - Display the multiplication table for
 * a given number beginning from 0.
 *
 * @n: The given number
 **/
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int row_count = 0, column_count, result_of_product;

		while (row_count <= n)
		{
			column_count = 1;
			printf("0");
			while (column_count <= n)
			{
				result_of_product = row_count * column_count;
				if (column_count <= n)
				{
					printf(",");
					if (result_of_product >= 100)
					{
						printf(" ");
					}
					else if (result_of_product >= 10)
					{
						printf("  ");
					}
					else
					{
						printf("   ");
										}
				}
				printf("%d", result_of_product);
				column_count++;
			}
			printf("\n");
			row_count++;
		}
	}
	else
	{
		if (n == 0)
			printf("%d\n", n);
	}
}
