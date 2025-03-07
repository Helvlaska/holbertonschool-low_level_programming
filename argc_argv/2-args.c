#include <stdio.h>

/**
 * main - la fonction print les arguments
 * @argc: est la length de argv
 * @argv: est l'array qui regroupe les arguments
 *
 * Return: 0 si tout va bien
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
