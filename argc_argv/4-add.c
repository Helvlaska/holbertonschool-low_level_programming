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
	int i, j;
	int somme = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			/*on verifie que chaque caracteres soit un chiffre*/
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		/*on additionne en passant les char en entier*/
		somme += atoi(argv[i]);
	}

	printf("%d\n", somme);

	return (0);
}
