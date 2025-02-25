#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size:  is the size of the triangle
 *
 */

void print_triangle(int size)
{
	int line, space, square;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (space = 0; space < size - line - 1; space++)
			{
				_putchar(' ');
			}
			for (square = 0; square <= line; square++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
