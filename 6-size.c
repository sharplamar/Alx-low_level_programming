#include <stdio.h>
 
int main (void)
{int a; long int c; char b; float f; long long int d;
	printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	return(0);
}
