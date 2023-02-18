#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: To print all possible combinations
 * of two two-digit numbers
 *
 * Return: the 0 success exit code
 **/
int main(void)
{
	int a = '0', b = '0', c = '0', d = '1';

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			while (c <= '9')
			{
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
					d++;
				}
				d = '0';
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
