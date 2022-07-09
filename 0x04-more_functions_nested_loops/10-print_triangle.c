#include "main.h"


/**
 * print_triangle -> Function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int sp, br, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (br = 0; br <= (size - 1); br++)
		{
			for (sp = 0; sp < (size - 1) - br; sp++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= br; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

