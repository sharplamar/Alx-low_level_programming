#include  <stdio.h>
#include <stdlib.h>

int main()
{
	int b, d, f;

	for (b = '0'; b < '9'; b++)
	{
		for (d = b + 1; d < '9'; d++)
		{
			for  (f = d + 1; f <= '9'; f++)
			{
				if ((b != d) != f)
				{
					putchar(b);
					putchar(d);
					putchar(f);

					if (b == '7' && d == '8')
					{
						continue;
					}
					
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
