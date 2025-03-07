#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcul la somme des arguments
 * @argc: est la length de argv
 * @argv: est l'array d'arguments passe a la fonction
 *
 * Return: 0 si tout c'est bien passe, 1 si nok
 */

int main(int argc, char *argv[])
{
	int i;
	int somme = 0;

	for (i = 1; i < argc; i++)
	{
		/*si la valeur est comprise entre 0 et 9*/
		if (*argv[i] > '0' && *argv[i] < '9')
		{
			/*on additionne en passant les char en entier*/
			somme += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", somme);

	return (0);
}
