#include "main.h"

/**
 * print_line -> Function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int st;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (st = 1; st <= n; st++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

