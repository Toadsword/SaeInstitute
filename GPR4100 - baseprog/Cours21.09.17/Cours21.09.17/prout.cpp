
#include "prout.h"

void switch_values(int* a, int* b)
{
	int switch_tmp = *a;
	*a = *b;
	*b = switch_tmp;
}