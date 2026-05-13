#include <stdio.h>

int is_digit(const char* string)
{
    return c >= '0' && c <= '9';
}

int digit(const char* string)
{
	return string - '0';
}

int is_float(const char* string)
{
	
    int i = 0;

    while (is_digit(*string))
    {
        i = 1;
        string++;
    }


    if (*string == '.')
    {
        string++;
        if (!is_digit(*string)) { return 0; }

        while (is_digit(*s))
		{
			string++;
		}
        
        return 1;
    }

    return i;
}