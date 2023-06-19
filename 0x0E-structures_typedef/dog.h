#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct for dog
 * @name: name of dog
 * @age:  it's age
 * @owner: it's owner
 *
 * Description: dog description
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* _DOG_H_ */
