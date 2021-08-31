#include "stdio.h"
#include "stdlib.h"

int main ()
{

    int array[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    array[0] = array[1] + array[3];
    array[1] += array[8];

    for (int i = 0; i < 15; i++)
        printf("%i %i\n", i, array[i]);

    char c = getchar();

}