#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* strlwr(char *str )
{
    while( *str )
    {
        *str=tolower(*str);
        str++;
    }
    return str;
}

char* strupr(char *str )
{

    while( *str )
    {
        *str=toupper(*str);
        str++;
    }
    return str;
}

char *strrev(char *str)
{
    char *p1, *p2;

    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main ()
{
    char s1[50];

    strcpy(s1, "string test 1");
    printf("%s: %i\n", s1, strlen(s1));
    strcat(s1, "cat the string");
    printf("%s: %i\n", s1, strlen(s1));
    printf("%s\n", strrev(s1));
    printf("%s\n", strupr(s1));
    printf("%s\n", strlwr(s1));
    printf("%s\n", strrev(s1));

    char c = getchar();
}