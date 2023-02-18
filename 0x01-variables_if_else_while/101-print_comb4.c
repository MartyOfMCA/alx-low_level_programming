#include <stdio.h>

/**
 * main - This program prints different
 * combinations of three digits
 *
 * Return: the success error code 0
 *
 **/
int main(void)
{
	int x, y, z;

	for (x = '0'; x < '9'; x++)
	{
		for (y = (x + 1); y <= '9'; y++)
		{
			for (z = (y + 1); z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
