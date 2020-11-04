#ifndef DOG_H
#define DOG_H

/**
* struct dog - named dog
* @name: name of struct
* @age: age number
* @owner: owner name
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);



#endif

