#ifndef DOG_H
#define DOG_H
/**
 * struct dog - where code start
 * @name: element
 * @age: element
 * @owner: element
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
