#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
/*
 * struct dog - Dog structure
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: Just dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H */
