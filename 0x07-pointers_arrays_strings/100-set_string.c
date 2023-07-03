#include "main.h"

/**
 * set_string - the value of a pointer is set to a char
 * @s: pointer to pointer
 * @to: pointer char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
