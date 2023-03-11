#include "main.h"

/**
 * main - Display the minimum number of coins to be
 * used as change for an amount of money. This is
 * the entry point to the program.
 *
 * @argc: The total number of arguments provided to
 * the program
 * @argv: Array of strings passed as values to the
 * program
 *
 * Return: The success exit code (0) if a valid amount
 * is provided otherwise 0
 *
 **/
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int amount, coins_index;
	int coins_used = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount < 0)
		{
			printf("0\n");
			return (EXIT_FAILURE);
		}
		while (amount > 0)
		{
			coins_index = 0;
			while (amount - coins[coins_index] < 0)
			{
				coins_index++;
			}
			coins_used++;
			amount -= coins[coins_index];
		}
		printf("%d\n", coins_used);
		return (0);
	}
	printf("Error\n");
	return (EXIT_FAILURE);
}
