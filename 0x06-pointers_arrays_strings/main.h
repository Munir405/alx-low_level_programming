#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar  - puts charcter to stdout
 * @c: character to print
 */

int _putchar(char c);

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string source
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenate n bytes to destination
 * @dest: destination
 * @src: source
 * @n: append n number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies n byte of a string to another 
 * @dest: destination
 * @src: source
 * @n: n bytes to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: second string
 * Return: int of space between
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - capitalize all letters
 * @s: string to manipulate
 * Return: string in all caps
 */

char *string_toupper(char *);

/**
 * cap_string - capitalize first letter
 * @s: string to cap
 * Return: string with first letter cap
 */

char *cap_string(char *s);

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s);

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s);

/**
 * print_number - print integer without using long, array, pointer
 * @n: number to print
 */

void print_number(int n);

#endif
