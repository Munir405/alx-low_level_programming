#ifndef _MAIN_
#define _MAIN_

/**
 * _putchar - put character to standard output
 * @c: character to put
 */

int _putchar(char c);

/**
 * _puts_recursion - print string
 * @s: string
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print reverse string
 * @s: string
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - return string length
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s);

/**
 * factorial - find factorial of n
 * @n: number
 * Return: factorial
 */

int factorial(int n);

/**
 * _pow_recursion - power of a number x
 * @x: number
 * @y: power
 * Return: power of numnber, -1 if less than 0
 */

int _pow_recursion(int n);

/**
 * _sqrt_recursion -  natural square  of number
 * @n: number
 * Return: naturral square root of number, -1 if not natural
 */

int _sqrt_recursion(int n);

/**
 * is_prime_number - check if prime number
 * @n: number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n);

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: 1 if true, 0 if not
 */

int is_palindrome(char *s);

/**
 * wildcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: integer
 */

int wildcmp(char *s1, char *s2);

#endif
