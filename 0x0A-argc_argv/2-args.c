#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguements tha passed in prog
 * @argc: number of arguements
 * @argv: pointer to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
