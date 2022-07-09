/**
 * print_square -> Function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int lg, br;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lg = 1; lg <= size; lg++)
		{
			_putchar('#');
			for (br = 2; br <= size; br++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

