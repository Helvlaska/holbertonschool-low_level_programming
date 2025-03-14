#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre à virgule)
 * @owner: Nom du propriétaire (chaîne de caractères)
 *
 * Description: Structure contenant des informations sur un chien.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - Structure représentant un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre à virgule)
 * @owner: Nom du propriétaire (chaîne de caractères)
 *
 * Description: Structure contenant des informations sur un chien.
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /*Fin de la protection*/
