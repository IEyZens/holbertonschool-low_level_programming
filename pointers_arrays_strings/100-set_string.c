#include "main.h"
/**
 * set_string Set the string object
 *
 * @s: est un char double pointeur
 * @to: est un char pointeur
 */

void set_string(char **s, char *to)
{
	/* La valeur de **s a été modifié pour qu'il pointe vers *to */
	*s = to;
}
