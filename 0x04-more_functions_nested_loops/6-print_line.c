#include "main.h"

/**
 *print_line - print _ qs line n times
 *
 *@n: times should n be printed
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n; i++)

		_putchar(95);
	_putchar('\n');
}
