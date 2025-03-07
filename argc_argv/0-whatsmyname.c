#include <stdio.h>

/**
 * main - print le nom du programme
 * @argc: c'est le nb d'arguments nom du programme compris
 * @argv: c'est un tableau avec tout les arguments
 *
 * Return: si 0 tout s'est bien passe
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
