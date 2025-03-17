#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - est une fonction pour utiliser le ptr sur fontion
 * @name: est la string a prendre en paramètre
 * @f: est le ptr sur fonction
 */

/*fonction qui ne renvoie rien*/
/*prend en paramètre un pointeur sur name*/
/*et un pointeur sur une fonction f qui prend en parmètre un char*/
/*f va au choix utiliser une fonction pour renvoyer name en minuscule*/
/*ou en majuscule (fonction déclarées dans le main.c)*/
void print_name(char *name, void (*f)(char *))
{
	/*vérifier que name et f n'est pas vide*/
	if (name == NULL || f == NULL)
		return;

	/*vérifie si name n'est pas une string null*/
	if (name[0] == '\0')
		return;

	/*lors de l'appel de la fonction print_name...*/
	/*le programme main va interrogé avec f qu'elle fonction utiliser*/
	/*(minuscule ou majuscule)*/
	/*dc si on appel print_name, alors on appel aussi f avec name en paramètre*/
	f(name);
}
