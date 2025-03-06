#include "main.h"
/**
 * @brief Set the string object
 *
 * @param s
 * @param to
 */

void set_string(char **s, char *to)
{
	/* La valeur de **s a été modifié pour qu'il pointe vers *to */
	*s = to;
}
