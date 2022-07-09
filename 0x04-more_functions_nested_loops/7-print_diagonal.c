#include "main.h"

/**
 * print_diagonal -> Function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int st, di;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (st = 1; st <= n; st++)
		{
			for (di = 1; di < st; di++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

