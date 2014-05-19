/*
 * bitManipulation.c
 * exercises on bit manipulations
 * gets the bit representation of an integer number
 * TODO: create an array of character to int converter function.
 * TODO: create a getBit function that uses bit manipulation instead.
 *
 */

#include<stdlib.h>
#include<stdio.h>

typedef unsigned char u_char;   // typed def an unsigned char
char* getBit(int);  // function that returns a pointer to the bit 
                    // representation of the integer

int main(int argc, char *argv[]) {

    // u_char set_bits = 0b00000011;   // Use this notation to represent bits
    //printf("%#010X\n", set_bits);

    char *output = getBit(10);
    printf("%s\n", output);

    return 0;
}

/* non-bit manipulation method */
char *getBit(int number) {
    char *bit = (char*)malloc(sizeof(long));
    char *beginning = bit;  // *pointer will keep pointing to the beginning
                            // of the array. This address will be the one to 
                            // be returned. *bit Will be the pointer that
                            // will move around, pointing on the specific 
                            // address of the whole malloc'ed area, setting
                            // the value to be stored in that area pointed to
                            // by *bit.
    if(number < 1) {
        *bit = '0';
        *(++bit) = '\0';
        return bit;
    }
    int d_no = number;
    while(d_no >= 1) {
        if (!(d_no%2)) {
            *bit++='1';
        } else {
            *bit++='0';
        }
        // printf("%s\n", beginning);
        // bit++;
        d_no = d_no/2;
        // printf("%d\n", d_no);
    }
    *bit = '\0';
    return beginning;   // Return the address pointing to the beginning of the
                        // string of characters.
}

/* get bit representation through bit manipulation */
char *int2Bit(int number) {
    char *p_msb = (char*)malloc(sizeof(int));
    u_char value = 0x00;
    while(number >= 1) {
        if(!(number%2)) {
        }
    }

}
