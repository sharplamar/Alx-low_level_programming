#include <stdio.h>
#include "main.h"


void print_alphabet_x10(void);

int main(void)
{
        int p;
        p = 0;
        char l;
        while(p < 10)
        {
                for (l = 'a'; l <= 'z'; l++)
                {
                        putchar(l);
                }

                p++;
                putchar('\n');
        }
}

