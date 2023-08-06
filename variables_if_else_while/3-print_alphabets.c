#include <stdio.h>
/**
 * * main - Entry point
 *  *
 *   *Return: always 0
 **/
int main(void)
{
	char letterMinus;
	char letterMayus;

	for (letterMinus = 'a'; letterMinus <= 'z'; letterMinus++)
	{
	putchar(letterMinus);
	}
	for (letterMayus = 'A'; letterMayus <= 'Z'; letterMayus++)
	{
	putchar(letterMayus);
	}
	putchar('\n');
	return (0);
}
