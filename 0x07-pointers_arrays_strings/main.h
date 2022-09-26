#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - puts character to stdout
 * @c: character to print
 */

int _putchar(char c);

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locate 1st occurance of character in string and returns pointer
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned *_strspn(char *s, char *accept);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accepted target
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of stringat first occurence
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates and return pointer to first occurance of substring
 * @haystack: string to search 
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - print sum of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size);

/**
 * set_string - set value of pointer to a char
 * @s: variable of type pointer
 * @to: char
 */

void set_string(char **s, char *to);

#endif
