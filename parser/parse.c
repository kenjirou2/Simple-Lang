#include <stdio.h>
#include "parse.h"

int is_digit(char c)
{
    return c >= 0x30 && c <= 0x39;
}

int digit(const char* string)
{
	return *string - '0';
}

int is_float()
{
	
	
}

int parse(const char* string)
{
	
    int i = 0;
	int digitcast = 0;
	
    while (string[i] != '\0')
    {
        if (is_digit(string[i])
        {
            digitcast = (INT)(digit(string[i]));
			printf("\nresult : %d", digitcast);
        }
        else
        {
            printf("\nother: %c\n", string[i]);
        }

        i++;
    }

    return 0;
}

int main()
{
    char buff[1024];

    printf("> ");

    fgets(buff, sizeof(buff), stdin);

    parse(buff);

    return 0;
}