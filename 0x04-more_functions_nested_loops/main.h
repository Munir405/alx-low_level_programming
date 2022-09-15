#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - print a character to standard output
 * @c: character to print
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase characters
 * @c: character to check
 * Return: 1 if true , 0 if false
 */

int _isupper(int c);

/**
 * _isdigit - check for digits from 0 to 9
 * @c: digit to check
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of multiplication
 */

int mul(int a, int b);

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void);

/**
 * print_line - prints the character line n times
 * @n: number of line to print
 */

void print_line(int n);

/**
 * print_diagonal - print diagonal line on terminal
 * @n: number of charcater to print
 */

void print_diagonal(int n);

/**
 * print_square - print a square of given size
 * @size: size of square
 */
void print_square(int size);

/**
 * print_triangle - print traingle of given size
 * @size: size of triangle
 */

void print_triangle(int size);

/**
 * print_number - print integer without using long
 * @n: number to be printed
 */

void print_number(int n);

#endif
