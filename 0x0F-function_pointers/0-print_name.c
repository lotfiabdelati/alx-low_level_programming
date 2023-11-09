#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: the name to prints it
  * @f: Pointer to function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
