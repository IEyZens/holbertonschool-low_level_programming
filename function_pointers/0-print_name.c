#include "function_pointers.h"
/**
 * print_name - affiche un nom en utilisant une fonction fournie.
 * @name: le nom à afficher.
 * @f: un pointeur vers une fonction qui sait comment afficher le nom.
 *
 * Return: Rien.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
