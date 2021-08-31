#include "stdio.h"
#include "stdlib.h"

int main ()
{

    int array[20][2] = { {1, 3}, {2, 10}, {3, 25}, {4, 49}, {5, 13}, {6, 97}, {7, 14}, {8, 18}, {9, 6} };

    array[0][0] = array[1][2] + array[3][1];
    array[1][0] += array[8][1];

    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 2; j++)
        printf("%i, %i %i\n", i, j, array[i][j]);
        printf("hello chase");

    char c = getchar();

}