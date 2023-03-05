#include <stdio.h>

int main(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb ++)
	{
		putchar(numb);

		if 
			(numb == 57)
		break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

			return (0);

}
