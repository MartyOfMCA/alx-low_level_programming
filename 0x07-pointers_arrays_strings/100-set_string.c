#include "main.h"

/**
 * set_string - Set the value of a pointer to a char.
 *
 * @s: The pointer to be set
 * @to: The  address to the new string
 *
 **/
void set_string(char **s, char *to)
{
	*s = to;
}
