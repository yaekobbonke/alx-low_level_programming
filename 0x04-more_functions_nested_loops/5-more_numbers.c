#include "main.h"

/**
 *  prints 10 times the numbers, from 0 to 14
 *
 *  Return: Always 0
 */
int main (void)
{ 
       int i;
	int j;

	i= 0;
	while (i<=10)
	{
		j = 0;
		while (j<=14 )
		{ 
			putchar(j);
			j++;
			putchar('\n');
		}
	putchar('\n');
	i++;
	}
}
