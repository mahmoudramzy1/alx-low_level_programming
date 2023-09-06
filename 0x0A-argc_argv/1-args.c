#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguements that passed in prog
 * @argc: parameter contains number of arguements
 * @argv: pointer to arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
