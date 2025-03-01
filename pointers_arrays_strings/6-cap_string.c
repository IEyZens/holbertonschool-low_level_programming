#include "main.h"
/**
 * cap_string - check the code
 *
 * Return: Always 0.
 */

 char *cap_string(char *str)
 {
	char *sep = " \t\n,;.!?\"(){}";
	int valid = 1;
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		int is_sep = 0;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				is_sep = 1;
				break;
			}
		}
		if (is_sep)
			valid = 1;
		else if (valid == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			valid = 0;
		}
	}

	return (str);
 }
