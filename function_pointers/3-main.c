#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 * @argc: ne nb d'argu + le name file
 * @argv: tableau de caractères entré en console
 *
 * Return: 98 si abs num1 ou num2
 * 99 si opérateur non valide
 * 100 si div ou modulo avec 0
 * 0 pour dire que tout c'est bien passé dans le programme
 */
/*je crée une fonction qui va prendre des arguments en console*/
/*argc = le nb d'argu + nom et argv = array d'arguments*/
/*donc argc doit être = 4 : 2x nb + 1x op + le name file*/
int main(int argc, char *argv[])
{
	/*variable pr stocker les num et le result*/
	int a, b, result;
	/*utiliser le pointeur sur fonctions*/
	int (*f)(int, int);

	/*vérifier que argc >= 4*/
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	/*on fait passer a & b type char au type int*/
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* Vérification que à chaque appel de fonction de calcul*/
	/*l'opérateur est valide : argv[2] */
	f = get_op_func(argv[2]); /*on recupère l'opérateur via le ptr*/
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	/*vérification division ou modulo par 0 */
	/*utilisation d'une fonction de comparaison (strcmp())*/
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	/*exécution de la fonction et affichage de result*/
	result = f(a, b);
	printf("%d\n", result);

	return (0);
}
