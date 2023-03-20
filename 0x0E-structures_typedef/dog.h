#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Desc: header file
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
