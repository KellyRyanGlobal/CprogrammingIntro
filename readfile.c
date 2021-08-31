//
// Created by kryan on 8/27/2021.
//
#include "stdio.h"

int main() {
    FILE *file;
    char s[255];
    int charsRead = 255 ;

    file = fopen("test.c", "r");
    if (file == NULL){
        printf("error file is null\n");
        exit(1);
    }

    while (fgets(s, 255, file) != NULL) {
        printf("%s", s);
    }

    while (charsRead == 255) {
        charsRead = fread(&s, sizeof(char), 255, file);
        for (int i = 0; i <charsRead; i++)
            printf("%c", s[i]);
    }
    fclose(file);
}
