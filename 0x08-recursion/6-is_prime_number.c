#include "main.h"

/**
 * _prime - checks if input is prime no
 * @p: number to be checked
 * @q: counter
 * Return: 1 if is prime, 0 if not
 */
int _prime(int p, int q)
{
	if (p % q == 0)
	{
		return (0);
	{
	else if (q <= 1)
	{
		return (1);
	}
	return (_prime(p, q - 1));
}
/**
 * is_prime_number - calls previous function
 * @n: input int
 * Return: 1 if is prime, 0 if not
 */
int is_prime_number(int n)
{
	int q = n / 2;

	if (n > 1)
	{
		return (_prime(n, q));
	}
	else
	{
		return (0);
	}
}
