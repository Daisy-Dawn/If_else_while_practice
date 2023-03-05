#include <stdio.h>

int main(void)
{
	int numb1, numb2, numb3;

	for (numb1 = 0; numb1 < 8; numb1++)
	{
		for (numb2 = numb1 + 1; numb2 < 9; numb2++)
		{
			for (numb3 = numb2 + 1; numb3 < 10; numb3++)
			{
				putchar((numb1 % 10) + '0');
				putchar((numb2 % 10) + '0');
				putchar((numb3 % 10) + '0');

				if (numb1 == 7 && numb2 == 8 && numb3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		
		}
	}
	putchar('\n');

	return (0);
}
