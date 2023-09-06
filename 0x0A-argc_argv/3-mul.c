#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply two arguements
 * @argc: number of arguements
 * @argv: pointer to arguements
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{

		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
