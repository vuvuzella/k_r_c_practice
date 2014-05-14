/*
 * squeeze.c
 * a program that searches for instances of input "b" in a character string input "a"
 *
 */

#include<stdlib.h>
#include<stdio.h>

char* squeeze(char[], char);

int main(int argc, char* argv[]) {

    if (argc < 3) {
        printf("Please input at least 2 arguments.\n");
        return -1;
    }
    char c = (char)argv[2];

    char* s = squeeze(argv[1], c);

    printf("The new string is: %s\n", s);

    return 0;
}

char* squeeze(char s[], char c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];  // s[i] is stored first, before j i incremented.
        }
    }

    s[j] = '\0';

    return &s[0];
}
