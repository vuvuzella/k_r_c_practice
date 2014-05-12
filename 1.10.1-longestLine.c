/*
 * longestLine.c
 * count the input of a certain character, and output the longest input
 * TODO:Do exercise 1-22, 23, 24
 */
#include<stdio.h>

#define MAXLINE 1000
#define TABSTOP 4

int max;
char line[MAXLINE];
char longest[MAXLINE];
char newLine[MAXLINE];

int myGetLine(void);
void myCopy(void);
void detab(int, int);

int main(int argc, char* argv[]) {
    extern char newLine[];
    int index,c;
    index=0;
    while((c=getchar()) != EOF) {
        if (c=='\t') {
            detab(TABSTOP, index);
            index += 4;
        } else {
            newLine[index] = c;
            index++;
        }
    }
    printf("\n%s\n", newLine);
}

int myGetLine(void) {
    int c, i;
    extern char line[];

    for (i = 0; (i < (MAXLINE - 1)) && 
                ((c=getchar()) != EOF) && 
                (c != '\n'); i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
}

void myCopy(void) {
    int i;
    extern char line[], longest[];

    i=0;
    while((longest[i] = line [i]) != '\0') {
        i++;
    }
}

/* Function that replaces tabs with spaces
 * or in this case, an underscore
 * */
void detab(int tabStops, int index) {
    extern char newLine[];
    int i;
    for (i=0; i < tabStops; i++) {
        newLine[index + i] = '_';
    }
}

