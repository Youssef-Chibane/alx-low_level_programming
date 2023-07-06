#include "main.h"

/**
 * _prime - recusion to check if @n is prime.
 * @n: number to be checked
 * @prime: iteration
 * Return: 1 if @n is prime, otherwise return 0.
*/

int _prime(int n, int prime)
{
	if (prime == 1)
	{
		return (1);
	}
	if (n % prime == 0 && prime > 0)
	{
		return (0);
	}
		return (_prime(n, prime - 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: number to be checked
 * Return: 1 if @n is prime, otherwise return 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
		return (_prime(n, n - 1));
}
