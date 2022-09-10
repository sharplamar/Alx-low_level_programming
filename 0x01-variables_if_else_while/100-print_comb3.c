#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b, d;

	for (b = '0'; b <= '9'; b++)
		for (d = b +1; d <= '9'; d++)
		{
			if (b != d)
			{	
				putchar(b);
				putchar(d);

				if (b == '8' && d == '9' )
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}

		}
	putchar('\n');

	return (0);
}
