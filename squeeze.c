/*
 * squeeze.c
 * a program that searches for instances of input "b" in a character string input "a"
 *
 */

#include<stdlib.h>
#include<stdio.h>

void squeeze(char[], char);
void copy(char[], char[]);

int main(int argc, char* argv[]) {

    if (argc < 3) {
        printf("Please input at least 2 arguments.\n");
        return -1;
    }
    // printf("%d\n", sizeof(argv[2]));

    squeeze(argv[1], *argv[2]);
    printf("The new string is: %s\n", argv[1]);

    return 0;
}

void squeeze(char s[], char c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];  // s[i] is stored first, before j i incremented.
        }
    }
    s[j] = '\0';
}

void copy(char from[], char to[]) {
    int i, j;

    while(from[i] != '\0') {
        to[i] = from[i];
    }

}
