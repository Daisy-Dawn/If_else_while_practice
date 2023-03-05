#include <stdio.h>

/*
 * main - Printing alphabets in lower cases usingg putchar
 *
 * Return: 0 always
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
