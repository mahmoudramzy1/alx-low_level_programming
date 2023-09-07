#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - changed coins
 * @argc: num of arguementss
 * @argv: pointer to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int mod = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (mod < 0)
	{	
		printf("%d\n", sum);
		return (0);
	}
	if (mod > 0)
	{
	if (mod / 25 != 0)
	{
		sum += mod / 25;
		mod %= 25;
	}
	if (mod / 10 != 0)
	{
		sum += mod / 10;
		mod %= 10;
	}
	if (mod / 5 != 0)
	{
		sum += mod / 5;
		mod %= 5;
	}
	if (mod / 2 != 0)
	{
		sum += mod / 2;
		mod %= 2;
	}
	sum += mod;
	printf("%d\n", sum);
	}
	return (0);

}
