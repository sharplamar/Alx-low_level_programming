#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
 */

void print_alphabet_x10(void)
{
        char p;
        char l;

        for(p = '0'; p <= '9'; p++)
        {
                for (l = 'a'; l <= 'z'; l++)
                {
                        _putchar(l);
                }
                _putchar('\n');
        }
}

