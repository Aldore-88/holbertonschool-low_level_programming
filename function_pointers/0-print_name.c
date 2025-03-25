#include "function_pointers.h"
/**
 * print_name - prints name using function poitner
 * @name: name of to input into function
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
		(f)(name);
}
