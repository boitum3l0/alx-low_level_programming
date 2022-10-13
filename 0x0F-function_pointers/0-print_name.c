#include "function_pointers.h"

/**
 * print_name - function that calls function that prints name
 * f - function that prints namen
 * @name: name to print
 * Return: void
 */
print_name(char *name, void (*f)(char *))
{
	char n;

	void f(char *)
	{
		n = &name;
		_putchar(n);
	}
}
