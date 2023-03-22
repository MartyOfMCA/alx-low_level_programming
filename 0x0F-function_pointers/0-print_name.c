#include "function_pointers.h"

/**
 * print_name - Display the name given using
 * the callback function provided.
 *
 * @name: The name to be displayed
 * @f: The callback function to display the given
 * name
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
