#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog's details.
 * @d: the dog's details to print.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)");

		if (d->age >= 0)
			printf("Age: %f\n", d->age);
		else
			printf("(nil)");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)");
	}
}
