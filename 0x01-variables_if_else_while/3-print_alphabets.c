/**
 * File: 3-print_alphabets.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * return: Always 0.
 */
 int main (void)
{ 
	char letters;

	for(letters = 'a'; letters <='z'; letters++)
		putchar(letters);
	for(letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
		putchar('\n');

		return (0);
		 
 
 }

