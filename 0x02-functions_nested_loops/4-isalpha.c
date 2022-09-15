#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 or 1
 */

int _isalpha(int c)
{

        if (c > 64 && c < 123)
                return (1);
        else
                return (0);
}

