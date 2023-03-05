#include <stdio.h>

int main(void)
{
	int numb1, numb2;

	for (numb1 = 0; numb1 < 9; numb1++)
	{

		for 
			(numb2 = numb1 + 1; numb2 < 10; numb2++)
			{
			putchar((numb1 % 10) + '0');
		putchar((numb2 % 10) + '0');

		if (numb1 == 8 && numb2 == 9)
			continue;
		putchar(',');
		putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
