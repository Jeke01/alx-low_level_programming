#include "main.h"
/**
 * A function that prints a string, followed by a new line.
 * _puts_recursion - function like puts();
 * *s:
 * Return: Always 0 = Success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
