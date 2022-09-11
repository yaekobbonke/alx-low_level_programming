#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a';letter++;)
		{
		if(letter != 'e' && letter != 'q')letter++;}
		putchar(letter);
	
		putchar('\n');
		return (0);


}
