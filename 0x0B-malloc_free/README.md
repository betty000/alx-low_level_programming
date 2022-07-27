# 0x0B. C - malloc, free
The function malloc is used to allocate a certain amount of memory during the execution of a program. The malloc function will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory.
## 0-create_array.c
Write a function that creates an array of chars, and initializes it with a specific char.



* Prototype: char *create_array(unsigned int size, char c);

* Returns NULL if size = 0

* Returns a pointer to the array, or NULL if it fails
## 1-strdup.c
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* Prototype: char *_strdup(char *str);
* The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

* Returns NULL if str = NULL
## 2-str_concat.c
Write a function that concatenates two strings.
* Prototype: char *str_concat(char *s1, char *s2);
## 3-alloc_grid.c
Write a function that returns a pointer to a 2 dimensional array of integers.
* Prototype: int **alloc_grid(int width, int height);
## 4-free_grid.c
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.
* Prototype: void free_grid(int **grid, int height);
