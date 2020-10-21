#ifndef DOG_H
#define DOG_H
/**
* struct dog - named dog
* name: name of struct
* float: age number
* owner: owner name
*/

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog;
#endif
