#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		putchar('\n');
	}
	return (0);
}
