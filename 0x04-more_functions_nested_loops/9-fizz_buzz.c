#include <stdio.h>
/**
 * main - prints number from 1 to 100
 * if the number from multiples of 3 prints Fizz
 * if number from multiples of 5 prints Buzz
 * if number from multiples of 3 and 5 prints FizzBuss
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			printf("Fizz");
		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		
		if (num != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
