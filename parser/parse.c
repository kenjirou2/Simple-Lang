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
        if (!is_digit(*string)) { return 1; }

        while (is_digit(*s))
		{
			string++;
		}
        
        return 0;
    }

    return i;
}

int parse(const char* string)
{
	
	if(is_float(string) != 0)
	{
		if(is_digit(string) != 0)
		{
			return 1;
		}
		
		return 1;
		
	}
	
	return 0;
	
}