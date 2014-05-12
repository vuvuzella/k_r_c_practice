/*
 * myHtoI.c
 * a function that converts a hexadecimal value into its decimal equivalent 
 * value.
 * TODO: Increase the number of hexadecimal digits that can be accommodated.
 * TODO: Implement the 0x and 0X stripper function
 * TODO: Buffer overflow guard routines
 * TODO: handle abnormal conditions.
 *
 */

#include<stdlib.h>
#include<stdio.h>

#define VALUE_1 1

int myHtoI(unsigned char*);
int getDecimalValue(char);
void stripHexHeader(unsigned char*);
char* p_rightMostDigit(unsigned char*);  // Returns a pointer to the rightmost digit
int getHexPlaceValue(int);

int getHexPlaceValue(int i) {    // Returns the place value where the hexadecimal digit is placed.
    int placeValue;
    switch(i) {
        case 1:
            placeValue = 1;
            break;
        case 2:
            placeValue = 16;
            break;
        case 3:
            placeValue = 32;
            break;
    }
    return placeValue;
}

char* p_rightMostDigit(unsigned char* hexValue) {
    /* searches for the rightmost character and returns a pointer to that digit */
    unsigned char* ptr = hexValue;
    unsigned char* prevPtr;

    while(*ptr != '\0') {
        prevPtr = ptr;
        ptr+=1;
    }

    return prevPtr;
}

// int stripHexHeader(unsigned char* hexValue) {
//     /* '0x' or '0X' stripper */
// }

int getDecimalValue(char hexDigit) {
    int decimalValue;
    switch(hexDigit) {
        case '1':
            decimalValue = 1;
            break;
        case '2':
            decimalValue = 2;
            break;
        case '3':
            decimalValue = 3;
            break;
        case '4':
            decimalValue = 4;
            break;
        case '5':
            decimalValue = 5;
            break;
        case '6':
            decimalValue = 6;
            break;
        case '7':
            decimalValue = 7;
            break;
        case '8':
            decimalValue = 8;
            break;
        case '9':
            decimalValue = 9;
            break;
        case 'A':
        case 'a':
            decimalValue = 10;
            break;
        case 'B':
        case 'b':
            decimalValue = 11;
            break;
        case 'C':
        case 'c':
            decimalValue = 12;
            break;
        case 'D':
        case 'd':
            decimalValue = 13;
            break;
        case 'E':
        case 'e':
            decimalValue = 14;
            break;
        case 'F':
        case 'f':
            decimalValue = 15;
            break;
        default:
            decimalValue = -1;
            break;
    }
    return decimalValue;
}

int myHtoI(unsigned char* hexValue) {

    int decimalValue = 0, i;
    unsigned char* ptr = hexValue;
    unsigned char* ptrRightMost = p_rightMostDigit(hexValue);
    unsigned char ptrValue = *ptrRightMost;

    for(i = 1; *ptr != '\0'; i++) {   // arguments in argv[] are null terminated.
        printf("%c\n", ptrValue);
        decimalValue += (getDecimalValue(ptrValue) * getHexPlaceValue(i));
        ptrValue = *(ptrRightMost - i);
        ptr++;
    }
    return decimalValue;
}

int main(int argc, char* argv[]) {

    int decimalValue;
    unsigned char* hexValue;
    if (argc != 2) {
        printf("Please enter exactly one argument only.\n");
        return -1;
    }

    hexValue = (char*)argv[VALUE_1];
    decimalValue = myHtoI(hexValue);
    printf("%d\n", decimalValue);
    return decimalValue;
}
