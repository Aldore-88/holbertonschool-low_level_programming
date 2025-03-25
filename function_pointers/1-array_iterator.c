#include "function_pointers.h"
/**
 * array_iterator - changes array depening on the address pointed for action
 * @array: array to use
 * @size: size of array
 * @action: points to address of function
 * <stddef.h> in header file already
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i; /*comparing will mean it needs to be the same type as size*/

	i = 0;
	while (i < size)
	{
		(action)(array[i]);
		i = i + 1;
		/*this runs the action call print_elem or print_elem_hex*/
	}
}
