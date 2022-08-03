# 0x0F. C - Function pointers
As we know that we can create a pointer of any data type such as int, char, float, we can also create a pointer pointing to a function. The code of a function always resides in memory, which means that the function has some address. We can get the address of memory by using the function pointer.
## 0-print_name.c
Write a function that prints a name.
* Prototype: void print_name(char *name, void (*f)(char *));
## 1-array_iterator.c
Write a function that executes a function given as a parameter on each element of an array.
* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
## 2-int_index.c
Write a function that searches for an integer.
* Prototype: int int_index(int *array, int size, int (*cmp)(int));
## 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
Write a program that performs simple operations.
* You are allowed to use the standard library
