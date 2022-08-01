# 0x0E. C - Structures, typedef
Typedef and Structures in C Programming The keyword Typedef is used to give a new symbolic name for the existing name. Typedef is type definitions make code more readable by giving application-specific names to types.
## dog.h
Define a new type struct dog with the following elements:
* name, type = char *
* age, type = float
* owner, type = char *
## 1-init_dog.c
Write a function that initialize a variable of type struct dog
* Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
## 2-print_dog.c
Write a function that prints a struct dog
* Prototype: void print_dog(struct dog *d);
## dog.h
Define a new type dog_t as a new name for the type struct dog.
## 4-new_dog.c
Write a function that creates a new dog.
* Prototype: dog_t *new_dog(char *name, float age, char *owner);
## 5-free_dog.c
Write a function that frees dogs.
* Prototype: void free_dog(dog_t *d);
