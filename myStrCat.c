/*
 * myStrCat.c
 * concatenates t to the end of s
 *
 */

#include<stdlib.h>
#include<stdio.h>

void mystrcat(char [], char [], char []);
int getCharStringSize(char[]);

int main(int argc, char* argv[]) {
    if(argc < 3) {
        printf("Input two arguments only.\n");
        return -1;
    }
    int stringSize = getCharStringSize(argv[1]) + getCharStringSize(argv[2]);
    char output[stringSize];    // Plus 1 for the null terminating character

    mystrcat(argv[1],argv[2], output);

    printf("Array size is: %d\n", stringSize);
    printf("concat of arg 1 and 2: %s\n", output);
    return 0;
}

void mystrcat(char s[], char t[], char output[]) {

    int i, j=0;
    for(i=0; s[i] != '\0'; i++) {   // copies s[] to output
        output[j++] = s[i];         // copy, then increment j (point to next)
    }
    for(i=0; t[i] != '\0'; i++) {   // continues to copy t[] to output
        output[j++] = t[i];
    }
    output[j] = '\0'; // assign null terminating character at the end of 
                        // newly concatenated string
}

/* Gets the size of a character string excluding \0 */
int getCharStringSize(char s[]) {
    int i;
    for(i = 0; s[i] != '\0'; i++) {
      /* do nothing */  
        printf("%c", s[i]);
    }
    printf(" number of characters: %d", i);
    printf("\n");
    return i;
}

