#ifndef _FUNCTIONPOINTERS_H
#define _FUNCTIONPOINTERS_H
#include <stddef.h>

void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void(*)(int));

#endif
