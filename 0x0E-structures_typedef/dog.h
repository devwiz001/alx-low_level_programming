#ifndef DOG_H
#define DOG_H
/**
 * struct dog - where code start
 * @name: element
 * @age: element
 * @owner: element
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
