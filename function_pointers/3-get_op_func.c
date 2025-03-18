#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - la fonction selectionne la bonne fonction de calcul
 * @s: est le tableau des différentes fonctions de calcul
 *
 * Return: la bonne fonction ou null si pas de match
 */
int (*get_op_func(char *s))(int, int)
{
	/*on crée la structure pour lier les fonctions aux symboles*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	/*variable de boucle pour déterminer l'index dans la structure*/
	int i;

	/*boucle pour itérer dans le tableau d'opérateurs ops*/
	/*.op se référer a la struct du fichier 3-calc*/
	while (ops[i].op != NULL)
	{
		/*condition pour choisir la bonne fonction selon le symbole*/
		/*on utilise une fonction de comparaison strcomp()*/
		if (strcomp(s, ops[i].op) == 0)
			/*on return la fonction (.f) correspondant au match*/
			return (ops[i].f);
		i++;
	}
	/*si aucun opérateur ne correspond*/
	return (NULL);
}
