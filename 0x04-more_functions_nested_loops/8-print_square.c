#include "main.h"

/**
 *print_square -  print charp square size lines of time
 *
 *@size: the number of line and rows of #
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
