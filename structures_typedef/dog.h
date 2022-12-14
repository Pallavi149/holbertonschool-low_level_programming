#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - New data type containing the information of the dog
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Name of the onwer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
