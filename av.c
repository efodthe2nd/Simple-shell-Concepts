#include <stdio.h>

/**
 * main - prints command line arguments
 * @ac: command line argument
 * @av: command line argument to print
 *
 * Return: 0 if successful
 */

int main(int ac, char **av)
{
	int counter = 1;

	while (av[counter])
	{
		printf("av[%2d]: %s\n", counter, av[counter]);
		counter++;
	}

	return (0);
}
